#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"

void chatterCallback(const sensor_msgs::LaserScan::ConstPtr& msg)
{
  ROS_INFO("Laser scan received...\n");
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener");
  ros::NodeHandle n("~");
  std::string laserTN;
  n.getParam("laser", laserTN);
  ros::Subscriber sub = n.subscribe(laserTN, 1000, chatterCallback);
  ros::spin();
  return 0;
}

