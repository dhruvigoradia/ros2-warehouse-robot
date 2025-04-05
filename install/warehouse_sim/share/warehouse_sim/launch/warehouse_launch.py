import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, RegisterEventHandler
from launch.event_handlers import OnProcessExit
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():
    pkg_dir = get_package_share_directory('warehouse_sim')
    
    # Load the URDF/SDF file
robot_description_path = os.path.join(pkg_dir, 'worlds', 'warehouse_world.sdf')    with open(robot_description_path, 'r') as file:
        robot_description = file.read()
    
    # Launch Gazebo with your world
    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('ros_gz_sim'), 'launch', 'gz_sim.launch.py')]),
        launch_arguments={'gz_args': '-r ' + os.path.join(pkg_dir, 'worlds', 'warehouse.world')}.items(),
    )
    
    # Publish robot state
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description}]
    )
    
    # Load and spawn the robot
    spawn_robot = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=['-name', 'tugbot', 
                  '-file', robot_description_path],
        output='screen'
    )
    
    # Bridge for cmd_vel and other common topics
    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/model/tugbot/cmd_vel@geometry_msgs/msg/Twist@gz.msgs.Twist',
            # Add more bridges as needed for sensors
        ],
        output='screen'
    )
    
    # Load controller manager
    controller_manager = Node(
        package='controller_manager',
        executable='ros2_control_node',
        parameters=[
            {'robot_description': robot_description},
            os.path.join(pkg_dir, 'config', 'tugbot_control.yaml')
        ],
        output='screen',
    )
    
    # Start controllers after robot is spawned
    diff_drive_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['diff_drive_controller'],
        output='screen',
    )
    
    joint_state_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['joint_state_broadcaster'],
        output='screen',
    )
    
    # Define the event handler to start controllers after the robot is spawned
    spawn_controllers = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=spawn_robot,
            on_exit=[diff_drive_spawner, joint_state_spawner],
        )
    )
    
    return LaunchDescription([
        gazebo,
        robot_state_publisher,
        spawn_robot,
        bridge,
        controller_manager,
        spawn_controllers,
    ])