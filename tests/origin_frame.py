#!/usr/bin/env python  
import rospy

# Because of transformations
#import tf_conversions
#from std_msgs.msg import String
from nav_msgs.msg import Odometry
#import tf2_ros
import geometry_msgs.msg
#import dynamic_graph_bridge_msgs.msg

global my_data

def callback(data):
	#my_data=data.data
	rospy.loginfo(data)
	#rospy.loginfo("I heard ")
	

def get_floating_base():
	rospy.init_node('listener_floating_base', anonymous=True)
	while not rospy.is_shutdown():
		#rospy.loginfo("hello")
		rospy.Subscriber("/simulator/floating_base_state", Odometry, callback)


if __name__ == '__main__':
	get_floating_base()

