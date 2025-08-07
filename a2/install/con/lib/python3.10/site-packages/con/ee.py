import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from std_msgs.msg import Float64MultiArray
import math
from anint.srv import Ang  # Ensure this is correctly defined in your ROS package

class EE(Node):
    def __init__(self):
        super().__init__('ee')
        self.sub = self.create_subscription(JointState, 'joint_states', self.callback, 10)
        self.pub_eepose = self.create_publisher(Float64MultiArray, 'end_effector_position', 10)
        self.pub_joint = self.create_publisher(JointState, 'joint_states', 10)
        self.serv = self.create_service(Ang, 'ang', self.ang_callback)

        self.eepose = Float64MultiArray()
        self.l1 = 0.6
        self.l2 = 0.4
        self.x = 0
        self.y = 0
        self.q1 = 0
        self.q2 = 0
    
    def ang_callback(self, request, response):
        chg = JointState()
        chg.header.stamp = self.get_clock().now().to_msg()
        self.q1 = request.t1
        self.q2 = request.t2

        chg.position = [self.q1, self.q2]  
        self.pub_joint.publish(chg)

        self.x = self.l1 * math.cos(self.q1) + self.l2 * math.cos(self.q1 + self.q2)
        self.y = self.l1 * math.sin(self.q1) + self.l2 * math.sin(self.q1 + self.q2)

        response.x = self.x
        response.y = self.y

        self.eepose.data = [self.x, self.y]
        self.pub_eepose.publish(self.eepose)

        return response

    def callback(self, msg):
        q1 = msg.position[0]
        q2 = msg.position[1]

        self.x = self.l1 * math.cos(q1) + self.l2 * math.cos(q1 + q2)
        self.y = self.l1 * math.sin(q1) + self.l2 * math.sin(q1 + q2)

        self.eepose.data = [self.x, self.y]
        self.pub_eepose.publish(self.eepose)

        self.get_logger().info(f'Publishing: {self.eepose.data}')

def main(args=None):
    rclpy.init(args=args)
    ee = EE()
    rclpy.spin(ee)
    ee.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
