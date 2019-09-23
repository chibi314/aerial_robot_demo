# Repository for MBZIRC

## dependency

- aeiral_robot:
   - url: https://github.com/tongtybj/aerial_robot
   - version: `mbzirc2020`
     *note*: do not use `master` branch

- aeiral_robot_recognition:
   - url: https://github.com/tongtybj/aerial_robot
   - version: `master`
   

## how to compile

```
cd <catkin_ws>
wstool merge -t src src/aerial_robot_demo/mbzirc2020/mbzirc.rosinstall
wstool update -t src
rosdep install -y -r --from-paths src --ignore-src --rosdistro $ROS_DISTRO
catkin build
```