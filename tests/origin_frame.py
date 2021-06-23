#!/usr/bin/env python  
import rospy

import tf2_ros
from nav_msgs.msg import Odometry
import geometry_msgs.msg

global my_data
my_data=0;

def callback(data):
	global my_data
	my_data=data
	rospy.loginfo(my_data)
	#rospy.loginfo("I heard ")
	

def get_floating_base():
	
	rospy.init_node('listener_floating_base', anonymous=True)
	while not rospy.is_shutdown():
		#rospy.loginfo("hello")
		rospy.Subscriber("/simulator/floating_base_state", Odometry, callback)
		global my_data
		rospy.loginfo(my_data)
		
def floating_base(msg):
	br = tf2_ros.TransformBroadcaster()
	t = geometry_msgs.msg.TransformStamped()
	t.header.stamp = rospy.Time.now()
	t.header.frame_id = "aa_odom"
	t.child_frame_id = "base_link"
	t.transform.translation.x = msg.pose.pose.position.x
	t.transform.translation.y = msg.pose.pose.position.y
	t.transform.translation.z = msg.pose.pose.position.z
	t.transform.rotation.x = msg.pose.pose.orientation.x
	t.transform.rotation.y = msg.pose.pose.orientation.y
	t.transform.rotation.z = msg.pose.pose.orientation.z
	t.transform.rotation.w = msg.pose.pose.orientation.w
	br.sendTransform(t)
	rospy.get_rostime() #get time as rospy.Time instance
	rospy.get_time() #get time as float secs
	


if __name__ == '__main__':
	rospy.init_node('listener_floating_base', anonymous=True)
	rospy.Subscriber("/simulator/floating_base_state", Odometry, floating_base)
	rospy.spin()
	#get_floating_base()

