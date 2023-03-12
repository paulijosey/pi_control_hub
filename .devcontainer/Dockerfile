ARG ros_version='eloquent'
# FROM josephp97/ros:${ros_version}
FROM ros:${ros_version}

ARG ros_version
ENV ROS_DISTRO=${ros_version}


ENV ROS_WS=/root/ros_ws
ENV CONF_DIR=/root/config

      # set up thread number for building
RUN   apt-get update && apt-get upgrade -y && apt-get install -y \
      cmake \
      git \
      bc \
      i2c-tools \
      # python3-lgpio \
      # python-rpi.gpio \
      libatlas-base-dev \
      libgflags-dev \
      libeigen3-dev \
      libgoogle-glog-dev \
      libsuitesparse-dev && \
      rm -rf /var/lib/apt/lists/*

# RUN add-apt-repository universe && \
#     apt update && \
#     curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg && \
#     echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | tee /etc/apt/sources.list.d/ros2.list > /dev/null

#       # additional ROS stuff
# RUN   apt update && apt install -y \
#       ros-${ROS_DISTRO}-cv-bridge \
#       ros-${ROS_DISTRO}-image-transport \
#       ros-${ROS_DISTRO}-message-filters  && \
#       rm -rf /var/lib/apt/lists/*

      # create directories for code and configs
RUN   mkdir -p ${CONF_DIR} && \
      mkdir -p ${ROS_WS}/src/

# Build Catkin Workspace
WORKDIR $ROS_WS
RUN /bin/bash -c "source /opt/ros/${ROS_DISTRO}/setup.bash; colcon build --symlink-install"


      # TODO: not sure this is needed (doesn't hurt though)
# RUN   sed -i '/exec "$@"/i \
#             source "${ROS_WS}/install/setup.bash"' /ros_entrypoint.sh

      # make development easier by auto-sourcing ROS stuff
RUN   cp /etc/skel/.bash* /root/ && \
      echo \
            'source "${ROS_WS}/install/setup.bash"' >> /root/.bashrc && \
      echo \
            'source "/opt/ros/${ROS_DISTRO}/setup.bash"' >> /root/.bashrc 
