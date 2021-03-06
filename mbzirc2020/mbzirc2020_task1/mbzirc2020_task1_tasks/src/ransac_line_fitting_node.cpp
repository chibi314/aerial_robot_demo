// #include <mbzirc2020_task1_tasks/RansacLineFitting.h>
#include <mbzirc2020_task1_tasks/ReactiveMotion.h>
int main (int argc, char **argv)
{
  ros::init (argc, argv, "ransac_line_fitting_node");
  ros::NodeHandle nh;
  ros::NodeHandle nh_private("~");
  // RansacLineFitting ransac_line_fitting(nh, nh_private);
  ReactiveMotion reactive_motion(nh, nh_private);
  ros::spin();
  return 0;
}
