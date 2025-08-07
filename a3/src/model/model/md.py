import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist, Pose
from nav_msgs.msg import Odometry
import numpy as np
import math

class VM(Node):
    def __init__(self):
        super().__init__('vm')
        self.m = 4.0
        self.i = 0.0586
        self.lf = 0.175
        self.lr = 0.175
        self.l = self.lf + self.lr
        self.cf = 10.0
        self.cr = 10.0

        self.x1, self.y1, self.v1, self.t1 = 0.0, 0.0, 0.0, 0.0
        self.x2, self.y2, self.v2, self.t2, self.w2 = 0.0, 0.0, 0.0, 0.0, 0.0

        self.a = 0.0
        self.s = 0.0

        self.initialized = False

        self.create_subscription(Odometry, '/odom', self.odm, 10)
        self.create_subscription(Twist, '/cmd_vel', self.cmd, 10)
        self.pm_pub = self.create_publisher(Pose, '/pose/pm', 10)
        self.db_pub = self.create_publisher(Pose, '/pose/db', 10)

        self.dt = 0.05
        self.timer = self.create_timer(self.dt, self.upd)

    def get_yaw_from_quaternion(self, q):
        siny_cosp = 2 * (q.w * q.z + q.x * q.y)
        cosy_cosp = 1 - 2 * (q.y**2 + q.z**2)
        return math.atan2(siny_cosp, cosy_cosp)

    def normalize_angle(self, angle):
        return math.atan2(math.sin(angle), math.cos(angle))

    def odm(self, msg):
        if not self.initialized:
            self.x2 = msg.pose.pose.position.x
            self.y2 = msg.pose.pose.position.y
            q = msg.pose.pose.orientation
            self.t2 = self.get_yaw_from_quaternion(q)
            self.v2 = np.hypot(msg.twist.twist.linear.x, msg.twist.twist.linear.y)
            self.w2 = msg.twist.twist.angular.z
            self.x1, self.y1, self.t1, self.v1 = self.x2, self.y2, self.t2, self.v2
            self.initialized = True

    def cmd(self, msg):
        self.a = msg.linear.x
        MAX_STEER = math.radians(30)
        self.s = max(-MAX_STEER, min(MAX_STEER, msg.angular.z))

    def upd(self):
        self.v1 += self.a * self.dt
        omega = (self.v1 / self.l) * math.tan(self.s)
        self.t1 += omega * self.dt
        self.t1 = self.normalize_angle(self.t1)
        self.x1 += self.v1 * np.cos(self.t1) * self.dt
        self.y1 += self.v1 * np.sin(self.t1) * self.dt
        self.pub(self.pm_pub, self.x1, self.y1, self.t1)

        self.v2 += self.a * self.dt
        beta = math.atan((self.lr / self.l) * math.tan(self.s))
        self.x2 += self.v2 * math.cos(self.t2 + beta) * self.dt
        self.y2 += self.v2 * math.sin(self.t2 + beta) * self.dt
        self.t2 += (self.v2 / self.l) * math.tan(self.s) * self.dt
        self.t2 = self.normalize_angle(self.t2)
        self.pub(self.db_pub, self.x2, self.y2, self.t2)

    def pub(self, publisher, x, y, t):
        msg = Pose()
        msg.position.x = x
        msg.position.y = y
        msg.orientation.z = math.sin(t / 2.0)
        msg.orientation.w = math.cos(t / 2.0)
        publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = VM()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
