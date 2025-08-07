import rclpy
from rclpy.node import Node
from visualization_msgs.msg import Marker
from geometry_msgs.msg import Pose

class Viz(Node):
    def __init__(self):
        super().__init__('vz')
        self.create_subscription(Pose, '/pose/pm', self.handle_point_mass, 10)
        self.create_subscription(Pose, '/pose/db', self.handle_bicycle, 10)
        self.pm_pub = self.create_publisher(Marker, '/viz/pm', 10)
        self.db_pub = self.create_publisher(Marker, '/viz/db', 10)

    def handle_point_mass(self, msg):
        marker = Marker()
        marker.header.frame_id = "map"
        marker.type = Marker.SPHERE
        marker.action = Marker.ADD
        marker.pose = msg
        marker.scale.x = float(0.2)
        marker.scale.y = float(0.2)
        marker.scale.z = float(0.2)
        marker.color.r = float(1.0)
        marker.color.g = float(0.0)
        marker.color.b = float(0.0)
        marker.color.a = float(1.0)
        marker.lifetime.sec = 1
        self.pm_pub.publish(marker)

    def handle_bicycle(self, msg):
        marker = Marker()
        marker.header.frame_id = "map"
        marker.type = Marker.ARROW
        marker.action = Marker.ADD
        marker.pose = msg
        marker.scale.x = float(0.5)
        marker.scale.y = float(0.2)
        marker.scale.z = float(0.2)
        marker.color.r = float(0.0)
        marker.color.g = float(0.0)
        marker.color.b = float(1.0)
        marker.color.a = float(1.0)
        marker.lifetime.sec = 1
        self.db_pub.publish(marker)


def main(args=None):
    rclpy.init(args=args)
    node = Viz()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
