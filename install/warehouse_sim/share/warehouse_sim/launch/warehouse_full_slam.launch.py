from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    return LaunchDescription([
        # Spawn the Tugbot into Gazebo
        ExecuteProcess(
            cmd=[
                'ros2', 'run', 'ros_gz_sim', 'create',
                '-name', 'tugbot',
                '-file', '/home/ros/ros2_ws/src/warehouse_sim/urdf/tugbot.sdf'
            ],
            output='screen'
        ),

        # Bridge Lidar topic from Gazebo to ROS /scan
        Node(
            package='ros_gz_bridge',
            executable='parameter_bridge',
            arguments=[
                '/scan@sensor_msgs/msg/LaserScan[gz.msgs.LaserScan'
            ],
            remappings=[
                ('/scan', '/world/world_demo/model/tugbot/link/scan_front/sensor/scan_front/scan')
            ],
            output='screen'
        ),

        # robot_state_publisher to publish TF tree from URDF
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{'use_sim_time': True}],
            arguments=[PathJoinSubstitution([
                FindPackageShare('warehouse_sim'),
                'urdf',
                'tugbot.urdf'
            ])]
        ),

        # SLAM Toolbox
        Node(
        package='slam_toolbox',
        executable='sync_slam_toolbox_node',
        name='slam_toolbox',
        output='screen',
        parameters=[{
            'use_sim_time': True,
            'slam_params_file': '/opt/ros/jazzy/share/slam_toolbox/config/mapper_params_online_sync.yaml',
            'base_frame': 'base_link',
            'odom_frame': 'odom',
            'map_frame': 'map'
        }],
        remappings=[
            ('scan', '/scan')
        ]
    )
    ])
