# Pi_Control_Hub

The main station to control automatic watering, led's and emergency handling

# Disclaimer

This is a personal project and thus a lot of parameters and usernames will be hardcoded. PR's to change that are welcome but for now this is not the main priority.

# Node Structure

The idea is that this will be a modular project. Everyone can implement/use the nodes needed. Afterwards modify the pi_hub package to launch all the nodes you want (also make sure to point it at the right param config file). 

TODO: add flowchart? maybe? 

# Setup on Pi:

TODO

# DEV Setup

## Dependencies

To get the development setup running on your machine make sure to have a working installation 
of docker and docker-compose! That should be more or less everything you need.

## Get Docker-Container running

To start the container run

```sh
docker-compose up -d
```

from the projects root directory.

## Interact with Container

The prefered way to develop on this projecte would be by using VS-Code (with the docker externsion).
Go to the docker-extension menu and right-click on the running container. Choose "Attach VS-code" and in the new vs-code window open the folder "/root/ros_ws". 
VS-Code will now install all extensions I want to include and also apply a theme (to easily distinguish between docker-contatiner vs-code and normal vs-code).

From here on you will have a working ROS2 install with all custome packages located in /root/ros_ws/src. 
To build all those packages run 

```sh
colcon build
```
from /root/ros_ws/.

## Creating a new package

To create a new ROS2 package follow the instructions on their WIKI: https://docs.ros.org/en/foxy/Tutorials/Beginner-Client-Libraries/Creating-Your-First-ROS2-Package.html. (Your choice if you prefere python or C++ ... we are not that performance oriantated)

## Modifing the Docker container

If you want to make changes to the docker container edit the Dockerfile located in .devcontainer/.
A shellscript for pushing to docker-hub is provided ... make sure you edit it in a way that it will push to your own docker account. Also update the docker-compose file to pull the correct image.

The build script will also allow cross compile (for use on ARM processors). A tutorial how to get cross compiling running on your machine will not be provided here but I'm sure you all know how to google.