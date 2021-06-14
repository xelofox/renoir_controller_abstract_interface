#!/usr/bin/env python  
import rospy
from dynamic_graph.sot_talos_balance.create_entities_utils import create_base_estimator, create_rospublish
import dynamic_graph.sot_talos_balance.talos.base_estimator_conf as base_estimator_conf
from dynamic_graph.sot.core.operator import Selec_of_vector

# Because of transformations
#import tf_conversions
#from std_msgs.msg import String
from nav_msgs.msg import Odometry
#import tf2_ros
import geometry_msgs.msg
#import dynamic_graph_bridge_msgs.msg

global my_data
my_data=0;

def callback(data):
	global my_data
	my_data=data
	
	#rospy.loginfo("I heard ")
	

def get_floating_base():
	
	rospy.init_node('listener_floating_base', anonymous=True)
	while not rospy.is_shutdown():
		#rospy.loginfo("hello")
		rospy.Subscriber("/simulator/floating_base_state", Odometry, callback)
		global my_data
		rospy.loginfo(my_data)


if __name__ == '__main__':
	get_floating_base()

