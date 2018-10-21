cmake_minimum_required(VERSION 2.8.3)
project(test_msgs)

find_package(catkin REQUIRED COMPONENTS
  std_msgs
  geometry_msgs
  message_generation
)

add_message_files(
   DIRECTORY msg
   FILES
   Test.msg
   TestInfo.msg
)

generate_messages(
   DEPENDENCIES
   std_msgs
   geometry_msgs
)

catkin_package(
  CATKIN_DEPENDS geometry_msgs nav_msgs sensor_msgs std_msgs message_runtime)


