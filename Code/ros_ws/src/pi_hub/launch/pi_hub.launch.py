import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()
    config = os.path.join(
        get_package_share_directory('pi_hub'),
        'config',
        'params.yaml'
        )
        
    node=Node(
        package = 'pi_hub',
        name = 'pi_hub_node',
        executable = 'pi_hub_node',
        parameters = [config]
    )
    ld.add_action(node)
    return ld