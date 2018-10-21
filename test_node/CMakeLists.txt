cmake_minimum_required(VERSION 2.8.3)
project(test_node)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  test_msgs
)

catkin_package(
  CATKIN_DEPENDS test_msgs)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(${PROJECT_NAME} src/test_msgs_node.cpp)

# add_dependencies(${PROJECT_NAME}_node ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

target_link_libraries(${PROJECT_NAME}
  ${catkin_LIBRARIES}
)

## Mark executables and/or libraries for installation
install(TARGETS ${PROJECT_NAME} 
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

## Mark all other required files for installation

install(DIRECTORY img
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)


