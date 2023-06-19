#!/bin/bash


ros2 run camera camera_run --ros-args \
    -p rms:=0.628610 \
    -p fx:=389.438894 \
    -p fy:=389.438894 \
    -p cx:=320.000000 \
    -p cy:=160.000000 \
    -p k1:=-0.357859 \
    -p k2:=0.142288 \
    -p p1:=-0.010197 \
    -p p2:=-0.001690 \
    -p k3:=0.0 \
    -p hfov:=78.8 \
    -p vfov:=44.7
#python3 src/camera/camera/camera.py
