import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription, ExecuteProcess, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    pkg_gazebo_ros = get_package_share_directory('gazebo_ros')
    world = os.path.join(get_package_share_directory('gazebo_ros'),
                         'worlds', 'empty.world')
    launch_file_dir = os.path.join(get_package_share_directory('robot_arm'), 'launch')
    urdf_path = os.path.join(get_package_share_directory('robot_arm'),
                             'urdf', 'robot.urdf')
    with open(urdf_path, 'r') as urdf_file:
        robot_description = urdf_file.read()
    
    gzserver = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(pkg_gazebo_ros, 'launch', 'gzserver.launch.py')
            ),
            launch_arguments={'world': world, 'verbose':'info', 'paused':'true'}.items(),
        )

    gzclient = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(pkg_gazebo_ros, 'launch', 'gzclient.launch.py')
            ),
        )

    forward_position_controller = ExecuteProcess( 
            cmd=['ros2', 'control', 'load_controller', '--set-state', 'active', 'forward_position_controller'], output='screen'
        )
    
    joint_state_broadcaster = ExecuteProcess(
            cmd=['ros2', 'control', 'load_controller', '--set-state', 'active', 'joint_state_broadcaster'], output='screen'
        )

    spawn_entity = Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=['-entity', 'robot_arm', '-topic',  '/robot_description',],
            output='screen'
        )
    robot_state_publisher = Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{
                         'use_sim_time': False,
                         'robot_description': robot_description,
                        }],
            arguments=[urdf_path])
    
    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation (Gazebo) clock if true'),
        gzserver,
        gzclient,
        robot_state_publisher,
        spawn_entity,
        joint_state_broadcaster,
        forward_position_controller
    ])
