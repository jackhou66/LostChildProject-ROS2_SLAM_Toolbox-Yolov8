#!/bin/bash

gnome-terminal --command "sh beagle_start.sh"
sleep 5s
gnome-terminal --command "sh static_tf_start.sh"
sleep 5s
gnome-terminal --command "sh odometry_start.sh"
sleep 10s
gnome-terminal --command "sh ros2_slam_start.sh"
sleep 5s
gnome-terminal --command "rviz2"
gnome-terminal --command "sh motor_start.sh"
