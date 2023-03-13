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
        
    pi_hub_node=Node(
        package = 'pi_hub',
        node_name = 'pi_hub_node',
        node_executable = 'pi_hub_node',
        parameters = [config]
    )

    pump_control_node=Node(
        package = 'pump_control',
        node_name = 'pump_control_node',
        node_executable = 'pump_control_node',
        parameters = [config]
    )

    # led_control_node=Node(
    #     package = 'led_control',
    #     name = 'led_control_node',
    #     executable = 'led_control_node',
    #     parameters = [config]
    # )

    ld.add_action(pi_hub_node)
    ld.add_action(pump_control_node)
    # ld.add_action(led_control_node)
    return ld