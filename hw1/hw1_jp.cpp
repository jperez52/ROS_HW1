// This program traces my initials
// This program was writen by Javier Perez Jr. - 1595083
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>  // For geometry_msgs::Twist
#include <turtlesim/SetPen.h>
#include <stdlib.h> 
#include <stdint.h>


int main(int argc, char **argv) {
  // Initialize the ROS system and become a node.
	ros::init(argc, argv, "publish_velocityPen");
	ros::NodeHandle nh;

  // Create a publisher object.
  ros::Publisher pub = nh.advertise<geometry_msgs::Twist>(
    "turtle1/cmd_vel", 1000);
		
	// Create a client object for the set_pen service.  This
	// needs to know the data type of the service and its
	// name.
	ros::ServiceClient setpenClient
		= nh.serviceClient<turtlesim::SetPen>("turtle1/set_pen");	
	
	// Set rate to .75 Hz
	ros::Rate rate(.75);
	
	// Create the request and response objects.
	turtlesim::SetPen::Request req;
	turtlesim::SetPen::Response resp;
	
	rate.sleep();	
		
	// Fill in the request data members, setting red pen and setting width to 3.
	req.r = 150;
	req.width = 3;
		
	rate.sleep();	
	
	// Call the setpen service
	bool success = setpenClient.call(req, resp);
	
	// Check for success
	if(success) {
	ROS_INFO_STREAM("Pen is Red");
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
	
	// Turning the pen off between initials.
	req.off = 1;
		
	rate.sleep();	
	
	// Call the setpen service
	bool success1 = setpenClient.call(req, resp);
	
	// Check for success
	if(success1) {
	ROS_INFO_STREAM("Pen is off");
		}
	else {
	ROS_ERROR_STREAM("Failed to set pen");
	}
	
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
	
	// Turning the pen back on.
	req.off = 0;
		
	rate.sleep();	
	
	// Call the setpen service
	bool success2 = setpenClient.call(req, resp);
	
	// Check for success
	if(success2) {
	ROS_INFO_STREAM("Pen is on");
		}
	else {
	ROS_ERROR_STREAM("Failed to set pen");
	}
	
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
	
	// Turning the pen off at end.
	req.off = 1;
		
	rate.sleep();	
	
	// Call the setpen service
	bool success3 = setpenClient.call(req, resp);
	
	// Check for success
	if(success3) {
	ROS_INFO_STREAM("Pen is off");
		}
	else {
	ROS_ERROR_STREAM("Failed to set pen");
	}
	
	rate.sleep();
	msg.linear.x = double(0);
	msg.angular.z = double(1.57);
	
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
		
} // This program was written by Javier Perez Jr. - 1595083