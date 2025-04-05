from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='slam_toolbox',
            executable='sync_slam_toolbox_node',
            name='slam_toolbox',
            output='screen',
            parameters=[{
                'use_sim_time': True,
                'slam_params_file': '/opt/ros/jazzy/share/slam_toolbox/config/mapper_params_online_sync.yaml'
            }],
            remappings=[
                ('scan', '/scan')
            ]
        )
    ])
