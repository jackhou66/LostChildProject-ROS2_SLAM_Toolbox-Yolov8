import sys
import rclpy
from roboid import *
from lidar import Lidar_publisher
from robot_localization import IMU_publisher
from robot_localization import Pulse_publisher
import threading
beagle = Beagle()

beagle.start_lidar()
beagle.wait_until_lidar_ready()
def lpc():
    lp = Lidar_publisher.LidarPublisher_class(beagle)
    rclpy.spin(lp)

def ipc():
    ip = IMU_publisher.IMUPublisher_class(beagle)
    rclpy.spin(ip)

def ppc():
    pp = Pulse_publisher.PulsePublisher_class(beagle)
    rclpy.spin(pp)


try:
    rclpy.init()
    t1 = threading.Thread(target=lpc)
    t1.start()
    t2 = threading.Thread(target=ipc)
    t2.start()
    t3 = threading.Thread(target=ppc)
    t3.start()

    t1.join()
    t2.join()
    t3.join()
finally:
    lpc.destroy_node()
    ipc.destroy_node()
    ppc.destroy_node()
    rclpy.shutdown()
    beagle.dispose()