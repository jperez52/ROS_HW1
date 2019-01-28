// This program traces my initials
// This program was writen by Javier Perez Jr. - 1595083
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>  // For geometry_msgs::Twist
#include <turtlesim/SetPen.h>
#include <stdlib.h> 
#include <stdint.h>


int main(int argc, char **argv) {
  // Initialize the ROS system and become a node.
	ros::init(argc, argv, "publish_velocity");
	ros::NodeHandle nh;

  // Create a publisher object.
  ros::Publisher pub = nh.advertise<geometry_msgs::Twist>(
    "turtle1/cmd_vel", 1000);
		
	// Create a client object for the set_pen service.  This
	// needs to know the data type of the service and its
	// name.
	ros::ServiceClient SetPenClient
		= nh.serviceClient<turtlesim::SetPen>("SetPen");	
	
	// Set rate to .75 Hz
	ros::Rate rate(.75);
	
	// Create the request and response objects.
	turtlesim::SetPen::Request req;
	turtlesim::SetPen::Response resp;
	
	rate.sleep();	
		
	// Fill in the request data members.
	uint8_t(req.r = 200);
	uint8_t(req.off = 0);
	ROS_INFO_STREAM("Req:"
					<< "r=" << req.r
					<< "off=" << req.off);		
	rate.sleep();	
	
	// Call the setpen service
	bool success = SetPenClient.call(req, resp);
	
	// Check for success
	if(success) {
	ROS_INFO_STREAM("Pen is Off");
		}
	else {
	ROS_ERROR_STREAM("Failed to set pen");
	}
	
	
	// Move the Turtle
	geometry_msgs::Twist msg;
	rate.sleep();
	msg.linear.x = double(-2);
	msg.angular.z = double(0);
	
	// Publish the message.
	pub.publish(msg);	  
	
	// Send a message to rosout with the details.
	ROS_INFO_STREAM("Sending velocity command:"
					<< " linear=" << msg.linear.x
					<< " angular=" << msg.angular.z);
	rate.sleep();
	msg.linear.x = double(1);
	msg.angular.z = double(0);
	
	// Publish the message.
	pub.publish(msg);	  
	
	// Send a message to rosout with the details.
	ROS_INFO_STREAM("Sending velocity command:"
					<< " linear=" << msg.linear.x
					<< " angular=" << msg.angular.z);
	
		rate.sleep();
	msg.linear.x = double(0);
	msg.angular.z = double(-1.56);
	
	// Publish the message.
	pub.publish(msg);	  
	
	// Send a message to rosout with the details.
	ROS_INFO_STREAM("Sending velocity command:"
					<< " linear=" << msg.linear.x
					<< " angular=" << msg.angular.z);
	rate.sleep();
	msg.linear.x = double(2);
	msg.angular.z = double(0);
	
	// Publish the message.
	pub.publish(msg);	  
	
	// Send a message to rosout with the details.
	ROS_INFO_STREAM("Sending velocity command:"
					<< " linear=" << msg.linear.x
					<< " angular=" << msg.angular.z);
	
		rate.sleep();
	msg.linear.x = double(1.57);
	msg.angular.z = double(-3.14);
	
	// Publish the message.
	pub.publish(msg);	  
	
	// Send a message to rosout with the details.
	ROS_INFO_STREAM("Sending velocity command:"
					<< " linear=" << msg.linear.x
					<< " angular=" << msg.angular.z);
	rate.sleep();
	msg.linear.x = double(-.785);
	msg.angular.z = double(1.56);
	
	// Publish the message.
	pub.publish(msg);	  
	
	// Send a message to rosout with the details.
	ROS_INFO_STREAM("Sending velocity command:"
					<< " linear=" << msg.linear.x
					<< " angular=" << msg.angular.z);
	
		rate.sleep();
	msg.linear.x = double(0);
	msg.angular.z = double(3.14);
	
	// Publish the message.
	pub.publish(msg);	  
	
	// Send a message to rosout with the details.
	ROS_INFO_STREAM("Sending velocity command:"
					<< " linear=" << msg.linear.x
					<< " angular=" << msg.angular.z);
	rate.sleep();
	msg.linear.x = double(2);
	msg.angular.z = double(0);
	
	// Publish the message.
	pub.publish(msg);	  
	
	// Send a message to rosout with the details.
	ROS_INFO_STREAM("Sending velocity command:"
					<< " linear=" << msg.linear.x
					<< " angular=" << msg.angular.z);
	
		rate.sleep();
	msg.linear.x = double(0);
	msg.angular.z = double(1.55);
	
	// Publish the message.
	pub.publish(msg);	  
	
	// Send a message to rosout with the details.
	ROS_INFO_STREAM("Sending velocity command:"
					<< " linear=" << msg.linear.x
					<< " angular=" << msg.angular.z);
	rate.sleep();
	msg.linear.x = double(2.5);
	msg.angular.z = double(0);
	
	// Publish the message.
	pub.publish(msg);	  
	
	// Send a message to rosout with the details.
	ROS_INFO_STREAM("Sending velocity command:"
					<< " linear=" << msg.linear.x
					<< " angular=" << msg.angular.z);
	
		rate.sleep();
	msg.linear.x = double(0);
	msg.angular.z = double(-1.57);
	
	// Publish the message.
	pub.publish(msg);	  
	
	// Send a message to rosout with the details.
	ROS_INFO_STREAM("Sending velocity command:"
					<< " linear=" << msg.linear.x
					<< " angular=" << msg.angular.z);
	
	rate.sleep();
	msg.linear.x = double(.5);
	msg.angular.z = double(0);
	
	// Publish the message.
	pub.publish(msg);	  
	
	// Send a message to rosout with the details.
	ROS_INFO_STREAM("Sending velocity command:"
					<< " linear=" << msg.linear.x
					<< " angular=" << msg.angular.z);
	
		rate.sleep();
	msg.linear.x = double(2.355);
	msg.angular.z = double(-3.14);
	
	// Publish the message.
	pub.publish(msg);	  
	
	// Send a message to rosout with the details.
	ROS_INFO_STREAM("Sending velocity command:"
					<< " linear=" << msg.linear.x
					<< " angular=" << msg.angular.z);
	
	rate.sleep();
	msg.linear.x = double(.5);
	msg.angular.z = double(0);
	
	// Publish the message.
	pub.publish(msg);	  
	
	// Send a message to rosout with the details.
	ROS_INFO_STREAM("Sending velocity command:"
					<< " linear=" << msg.linear.x
					<< " angular=" << msg.angular.z);
	
} // This program was written by Javier Perez Jr. - 1595083