import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
from visualization_msgs.msg import Marker
from geometry_msgs.msg import Point

class MarkerNode(Node):
    def __init__(self):
        super().__init__('marker_node')
        self.publisher_ = self.create_publisher(Marker, 'marker2rviz', 10)
        self.subscriber_ = self.create_subscription(Float32, 'smo2marker', self.callback, 10)
        self.timer=0.0001
        self.time=self.create_timer(self.timer,self.markfn)
        self.subscriber_
        self.x=10
        


    def callback(self, msg):
        self.x=msg.data
        self.get_logger().info('Current x= "%f"' % msg.data)
    
    def markfn(self):
        marker=Marker()

        marker.header.frame_id = "map"
        marker.header.stamp = self.get_clock().now().to_msg()
        marker.ns = "Sphere"
        marker.id = 0
        marker.type = marker.SPHERE
        marker.action = marker.ADD

        marker.scale.x = 1.0
        marker.scale.y = 1.0
        marker.scale.z = 1.0

        marker.color.a = 1.0
        marker.color.r = 0.0
        marker.color.g = 1.0
        marker.color.b = 0.0

        marker.pose.orientation.w = 1.0
        marker.pose.position.x = float(self.x)
        marker.pose.position.y = 0.0
        marker.pose.position.z = 0.0

        self.publisher_.publish(marker)

        marker1=Marker()
        marker1.header.frame_id = "map"
        marker1.header.stamp = self.get_clock().now().to_msg()
        marker1.ns = "Cube"
        marker1.id = 1
        marker1.type = marker1.CUBE
        marker1.action = marker1.ADD

        marker1.scale.x = 1.0
        marker1.scale.y = 1.0
        marker1.scale.z = 1.0

        marker1.color.a = 1.0
        marker1.color.r = 1.0
        marker1.color.g = 0.0
        marker1.color.b = 0.0
        
        marker1.pose.orientation.w = 1.0
        marker1.pose.position.x = 0.0
        marker1.pose.position.y = 0.0
        marker1.pose.position.z = 0.0

        self.publisher_.publish(marker1)

        marker2=Marker()
        marker2.header.frame_id = "map"
        marker2.header.stamp = self.get_clock().now().to_msg()
        marker2.ns = "Line"
        marker2.id = 2
        marker2.type = marker2.LINE_STRIP
        marker2.action = marker2.ADD

        marker2.scale.x = 0.5
        marker2.scale.y = 0.0
        marker2.scale.z = 0.0

        marker2.color.a = 1.0
        marker2.color.r = 0.0
        marker2.color.g = 0.0
        marker2.color.b = 1.0

        point1 = Point()
        point1.x = 0.0
        point1.y = 0.0
        point1.z = 0.0
        marker2.points.append(point1)

        point2 = Point()
        point2.x = float(self.x)
        point2.y = 0.0
        point2.z = 0.0
        marker2.points.append(point2)
        
        self.publisher_.publish(marker2) 
    
def main(args=None):
    rclpy.init(args=args)
    marker_node = MarkerNode()
    rclpy.spin(marker_node)
    marker_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()


       



