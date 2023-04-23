import yaml
import os

import add_path
import mqtt_controllers

def readConf():
    # for now hardcoded
    with open(os.path.join(os.path.dirname(os.path.abspath(__file__)), 
                "config/pflanzenkisterl_conf.yaml"), "r") as stream:
        try:
            controllers_dict = yaml.safe_load(stream)
        except yaml.YAMLError as exc:
            print(exc)

    return controllers_dict


def run():
    controllers_dict = readConf()
    # init MQTT controllers
    controllers = mqtt_controllers.MQTTControllers(controllers_dict)


if __name__ == '__main__':
    run()
