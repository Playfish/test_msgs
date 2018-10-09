#include <ros/ros.h>
#include <test_msgs/Test.h>

int main(int argc, char** argv){

  ros::init(argc, argv, "test_node");
  ros::NodeHandle nh;
  ros::Publisher test_msgs_pub = nh.advertise<test_msgs::Test>("/test_msgs", 1);

  ros::Rate loop(10.0);
  int count = 0;
  while(ros::ok()){
    test_msgs::Test msgs_;

    std::stringstream head_;
    head_ << "Current count: " << count;
    msgs_.count = head_.str();

    ROS_INFO("msg: { %s }", msgs_.count.c_str());
    test_msgs_pub.publish(msgs_);

    loop.sleep();
    ros::spinOnce();
    count++;
  }
}
