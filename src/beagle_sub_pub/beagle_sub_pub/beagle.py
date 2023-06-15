
import rclpy
from rclpy.node import Node

from std_msgs.msg import Float32MultiArray, Header
from sensor_msgs.msg import Imu, LaserScan
from geometry_msgs.msg import Vector3, Quaternion
from tf_transformations import quaternion_from_euler


from roboid import *
import math
import time

import threading

import pandas as pd

class BeagleSubPub_class(Node):

    encoder_pulses_per_one_revolution = 1900 # 대략
    wheel_radius = 0.033 # 3.3 cm

    # sensor update and publish interval
    encoder_timer_interval = 0.1
    imu_timer_interval = 0.1
    lidar_timer_interval = 0.1



    encoder_total_degree = 2 * math.pi
    scale_factor = encoder_total_degree/encoder_pulses_per_one_revolution


 #   count_lidar_timer = lidar_timer_interval//timer_interval
 #   current_lidar_count = 0


    def __init__(self, b):
        super().__init__("beagle_sensors_motors")
        self.left_encoder_sum = 0.0
        self.right_encoder_sum = 0.0
        self.b = b

        self.accel = [[0 for _ in range(4)] for _ in range(16)]
        self.gyro = [[0 for _ in range(4)] for _ in range(16)]
        self.b.listen_accelerometer(self.accel_update) # accel listener 등록
        self.b.listen_gyroscope(self.gyro_update) # gyro listener 등록

        # Calibrate
        self.error_acc_x = 0.0
        self.error_acc_y = 0.0
        self.error_acc_z = 0.0

        self.error_gyr_x = 0.0
        self.error_gyr_y = 0.0
        self.error_gyr_z = 0.0
        #gyro 와 가속도의 평균값 같은 timestamp 에 여러개의 가속도를 찍어서 정확도를 높인다.

        # lidar
        self.lidar_publisher = self.create_publisher(LaserScan, "scan", 10)
        # imu
        self.imu_publisher = self.create_publisher(Imu, "imu_topic", 10)

        # encoder
        self.motor_subscriber = self.create_subscription(Float32MultiArray, "motor_topic", self.motor_callback, 10)
        self.encoder_publisher = self.create_publisher(Float32MultiArray, "encoder_topic", 10)


        # self.t1 = threading.Thread(target = self.create_timer, args = (self.imu_timer_interval, self.publish_imu_data))
        # self.t2 = threading.Thread(target = self.create_timer, args = (self.encoder_timer_interval, self.publish_encoder_data))
        # self.t3 = threading.Thread(target = self.create_timer, args = (self.lidar_timer_interval, self.publish_lidar_data))
        
        # self.t1.start()
        # self.t2.start()
        # self.t3.start()
        
        self.timer1 = self.create_timer(self.imu_timer_interval, self.publish_imu_data)
        self.timer2 = self.create_timer(self.encoder_timer_interval, self.publish_encoder_data)
        self.timer3 = self.create_timer(self.lidar_timer_interval, self.publish_lidar_data)
    # def imu_calibrate(self):
    #     print ('calibration start')

    #     calibration_time = 2
    #     target_accel = [0.0, 0.0, -1.0]
    #     target_gyro = [0.0, 0.0, 0.0]

    #     accel_list = []
    #     gyro_list = []


    #     # 완전이 값이 가져올때까지 대기

    #     time.sleep(1)
    #     start_time = time.time()
    #     while (time.time()-start_time <= calibration_time):
    #         accel_list.append(self.get_mean(self.accel))
    #         gyro_list.append(self.get_mean(self.gyro))

    #     # calibration_time 초 동안 평균
    #     c_a_x, c_a_y, c_a_z, c_t = self.get_mean(accel_list)
    #     c_g_x, c_g_y, c_g_z, c_t = self.get_mean(gyro_list)

    #     self.error_acc_x = target_accel[0] - c_a_x
    #     self.error_acc_y = target_accel[1] - c_a_y
    #     self.error_acc_z = target_accel[2] - c_a_z

    #     self.error_gyr_x = target_gyro[0] - c_g_x
    #     self.error_gyr_y = target_gyro[1] - c_g_y
    #     self.error_gyr_z = target_gyro[2] - c_g_z


    #     print ('calibration complete')
    #     print ('acc : ', self.error_acc_x, self.error_acc_y,self.error_acc_z)
    #     print ('gyro : ', self.error_gyr_x, self.error_gyr_y, self.error_gyr_z)

    def accel_update(self, index, timestamp, x, y, z):
        self.accel[index] = [x, y, z, timestamp]
    def gyro_update(self, index, timestamp, x, y, z):
        self.gyro[index] = [x, y, z, timestamp]

    def motor_callback(self, msgs):
        motor_value = msgs.data

        left_motor_speed = motor_value[0]
        right_motor_speed = motor_value[1]

        self.b.wheels(left_motor_speed, right_motor_speed)
        print ('motor_subscribtion')
    def publish_lidar_data(self):
        lidar_values = self.b.lidar()

        msg = LaserScan()
        msg.header = Header()
        msg.header.frame_id = "laser"

        msg.angle_min = math.radians(0)
        msg.angle_max = math.radians(359)
        msg.angle_increment = math.radians(1)
        msg.range_min = float(0)
        msg.range_max = float(65534 / 1000)
        msg.ranges = [i / 1000 for i in lidar_values]


        self.get_logger().info("Published LiDAR value: {0}".format(msg.ranges[50])) 
        msg.header.stamp = self.get_clock().now().to_msg() # 항상 publish 전에 붙어있어야 된다. 그 사이에 연산이 있으면 time stamp 차이가 음수가 될 수 있음
        self.lidar_publisher.publish(msg)

    # def get_mean(self, twondarr):
    #     row = len(twondarr)
    #     col = 0
    #     print (row)
    #     print(len(twondarr[0]))
    #     if row != 0:
    #         if (len(twondarr[0]) != 0):
    #             sum_x = 0.0
    #             for i in range(row):
    #                 sum_x += twondarr[i][0]
    #             sum_y = 0.0
    #             for i in range(row):
    #                 sum_y += twondarr[i][1]
    #             sum_z = 0.0
    #             for i in range(row):
    #                 sum_z += twondarr[i][2]
    #             sum_t = 0.0
    #             for i in range(row):
    #                 sum_t += twondarr[i][3]
    #             return sum_x/row, sum_y/row, sum_z/row, sum_t/row
    #     self.get_logger().info('Error : mean function input data value is not valid. Row {row}, Col {col}'.format(row=row, col=col))
    #     return -1, -1, -1, -1

    def publish_imu_data(self):
        # 가속도

        df_accel = pd.DataFrame(self.accel)
        df_gyro = pd.DataFrame(self.gyro)


        a_x = df_accel[0].mean()
        a_y = df_accel[1].mean()
        a_z = df_accel[2].mean()
        a_t = df_accel[3].mean()

        g_x = df_gyro[0].mean()
        g_y = df_gyro[1].mean()
        g_z = df_gyro[2].mean()
        g_t = df_gyro[3].mean()
        #a_x, a_y, a_z, a_t = self.get_mean(self.accel)

        # 자이로
        #g_x, g_y, g_z, g_t = self.get_mean(self.gyro)




        msg = Imu()
        msg.header = Header()
        msg.header.frame_id = "imu"


        acceleration = Vector3()
        acceleration.x = (a_x + self.error_acc_x) *9.81
        acceleration.y = (a_y + self.error_acc_y)* 9.81
        acceleration.z = (a_z + self.error_acc_z) * 9.81
        msg.linear_acceleration = acceleration


        angular = Vector3()
        angular.x = math.radians(g_x + self.error_gyr_x)
        angular.y = math.radians(g_y + self.error_gyr_y)
        angular.z = math.radians(g_z + self.error_gyr_z)
        msg.angular_velocity = angular

        #print (acceleration.x, acceleration.y, acceleration.z)
        orientation = Quaternion()
        ox, oy, oz, ow = quaternion_from_euler(angular.x, angular.y, angular.z)

        orientation.x = ox
        orientation.y = oy
        orientation.z = oz
        orientation.w = ow
        msg.orientation = orientation


        self.get_logger().info("Imu published value : %s %s" % (msg.angular_velocity, msg.linear_acceleration))
        msg.header.stamp = self.get_clock().now().to_msg()
        self.imu_publisher.publish(msg)




    def publish_encoder_data(self):


        # 엔코더 값은 정수 -2147483648 ~ 2147483647 초기 0 의 정수 값을 가진다
        pulse_right_diff = self.b.left_encoder()
        pulse_left_diff = self.b.right_encoder()


        self.left_encoder_sum += pulse_left_diff
        self.right_encoder_sum += pulse_right_diff
        # 최종 이동거리
        # w = d theta / dts

        # v = r w

        # s = r * theta # 누적


        left_theta = pulse_right_diff * self.scale_factor #self.total_degree * (pulse_right_diff / self.pulses_per_one_revolution)
        right_theta = pulse_left_diff * self.scale_factor #self.total_degree * (pulse_left_diff / self.pulses_per_one_revolution)

        total_left_theta = self.left_encoder_sum * self.scale_factor
        total_right_theta = self.right_encoder_sum * self.scale_factor


        left_angular_velocity = left_theta / self.imu_timer_interval
        right_angular_velocity = right_theta / self.imu_timer_interval


        left_velocity_mps = left_angular_velocity * self.wheel_radius
        right_velocity_mps = right_angular_velocity * self.wheel_radius

        left_distance_m = self.wheel_radius * total_left_theta
        right_distance_m = self.wheel_radius * total_right_theta
        msg = Float32MultiArray()
        msg.data = [left_distance_m, right_distance_m, left_velocity_mps, right_velocity_mps]


        self.get_logger().info('Encoder published value %s ' % str(msg.data))
        self.encoder_publisher.publish(msg)
        self.b.reset_encoder()






def main(args=None, beagle_instance = None):



    # 1886 1875map 값이 안받아지는 문제가 있어서 다시 업데이트

    if beagle_instance is None:
        beagle_instance = Beagle()
    beagle_instance.reset()
    beagle_instance.start_lidar()
    beagle_instance.wait_until_lidar_ready()

    try:
        rclpy.init(args=args)
    finally:
        rclpy.shutdown()
        rclpy.init(args=args)
    publisher = BeagleSubPub_class(beagle_instance)

    try:

        rclpy.spin(publisher)
    except KeyboardInterrupt as e:
        print (e)
    finally:
        beagle_instance.dispose()
        publisher.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
