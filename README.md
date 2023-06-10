# LostChildProject-ROS2_SLAM_Toolbox-Yolov8
Application of YOLOV8 and ROS2's SLAM TOOL BOX to Beagle Robot (Robomation's robot)

Kwangwoon University Robot Programming class's project

# Project introduce

백화점과 같이 넓은 장소에서 어린 아이들이 실종 되는 경우가 종종 있다

아래 자료를 읽어보면 생각보다 많은 사람들이 실종 되는 것을 볼 수 있다.

<img width="80%" src="https://thumb.mt.co.kr/06/2021/05/2021052815025284211_2.jpg"/>

하지만, 실종된 사람들을 찾는데 많은 사회적 비용이 발생하고 탐색 영역이 넓기 때문에 비효율적인 경우가 많다. 

실제로 아래 그래프를 확인해보면 해마다 발견 확률이 점차 줄어들고 있는 것을 볼 수 있다.

<img width="80%" src="https://mblogthumb-phinf.pstatic.net/MjAxOTEyMTBfMjMy/MDAxNTc1OTQyMDAwMTY5.lA1i8agmVL7O4c8vSTk3aWIEu6WlgIuVX39xp9aPe10g.holfiM9CQ_D0sqCAJhqAltxiqRnBrDwNuHFUJJpKRhQg.PNG.cuf1105/%EC%8B%A4%EC%A2%85%EC%95%84%EB%8F%99%EB%B0%9C%EA%B2%AC%ED%99%95%EB%A5%A0_%EA%B7%B8%EB%9E%98%ED%94%84.png?type=w800"/>

적어도 아이들이 실종 장소로부터 멀리가기 전에 근처에서라도 발견하게 된다면 
실종 아동을 줄이는데 크게 도움이 될거라고 생각한다. 

그래서 이번 작품 주제를 위와 같이 실종 아동 탐색 로봇으로 정하게 되었다.  


# Error fix
SLAM Toolbox의 launch 파일을 실행 했을때 Package not found 오류가 나오는 경우가 있었다.
이럴때는 source install/local_setup.bash 를 실행하면 오류가 발생하지 않는다. ~/.bashrc에 기본 ws가 robot_ws 로 설정되어있어 ros2 launch를 할때 package를 못찾는 것 같다.

# Odometry

map frame
세계 중심 프레임이다. 지구에 고정되어 있는 절대 움직이지 않는 기준 프레임이다.

odometry frame
로봇의 출발 지점으로 부터 얼마나 떨어져 있는가를 알려주는 프레임이다.

로봇의 출발 위치에 생성되는 프레임으로 로봇이 다시 시작 될때마다 바뀌는 프레임이다.

즉, local reference frame으로 짧은 기간 로봇의 움직임을 추적하는데 유용한 프레임이다.

base foot print frame 
로봇 바닥 프레임

base link frame
로봇의 중심 프레임

laser frame


map-> odom -> base footprint -> base link -> laser





odom -> base foot print 필요
 변환은 slam tool box가 한다.

map -> odom 필요

이건 odometry.py 에서 header -> child



slam toolbox는 map -> odometry 


# 참고 자료

## Odometry 
https://blog.naver.com/PostView.naver?blogId=ycpiglet&logNo=222139215170&categoryNo=139&parentCategoryNo=0


https://pinkwink.kr/1346

https://soohwan-justin.tistory.com/50

https://velog.io/@bbolddagu/ROS2-Odometry


## Topic

https://docs.ros.org/en/crystal/Tutorials/Topics/Understanding-ROS2-Topics.html


