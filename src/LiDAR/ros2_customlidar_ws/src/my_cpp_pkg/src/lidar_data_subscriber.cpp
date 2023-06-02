#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp" //The type /interface of the messages churned out by the Lidar
class MyNode: public rclcpp::Node
{
public:
    MyNode(): Node("lidar_data_subscriber")
    {
        subscriber_ = this->create_subscription<sensor_msgs::msg::PointCloud2>("rslidar_points", 10, 
                                                                                std::bind(&MyNode::callbackLidarData,this,std::placeholders::_1)); //<> is the interface, the first argument is the topic name, second one is the queue size, third one is the callback

        RCLCPP_INFO(this->get_logger(), "lidar_data_subscriber has been started.");
    }


private:
    void callbackLidarData(const sensor_msgs::msg::PointCloud2::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(),"%s", (std::to_string(msg->height)).c_str()); //msg contains data from the Lidar, the simplest I could find was height, s
    }

    //Declaring subscriber

    rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr subscriber_;
};





int main(int argc, char **argv)
{
    //Initialize ros2 communications   
    rclcpp::init(argc,argv);
    //Create a node
    auto node = std::make_shared<MyNode>(); //Shared pointer so that memory is deallocated when pointer goes out of scope
    rclcpp::spin(node); //Spin expects a shared pointer to an RCLCPP node
    rclcpp::shutdown();
    return 0;
}