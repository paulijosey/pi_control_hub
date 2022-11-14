#!/bin/sh

set -e
function main {
	# Get command line options
	OPTERR=1
	local ros_version='foxy'
	local cross_compile=0

	while getopts ":hr:C" opt; do
		case $opt in
		h)
			print_help
			exit 0
			;;
		r)
			ros_version=$OPTARG
			;;
		C)
			cross_compile=1
			;;
		*)
			exit_fail "Illegal parameter!"
			;;
		esac
	done

	echo -e 'ROS Version	: ' $ros_version

	build_docker_image
	exit 0
}

function build_docker_image {
	tagname=${ros_version}
	if [ $cross_compile == 1 ]; then
		docker buildx build --push --platform linux/amd64,linux/arm/v7, linux/arm64 --tag josephp97/pi_control_hub_dev:$tagname --build-arg ros_version=$ros_version .devcontainer/
	else
		docker buildx build --push --platform linux/amd64 --tag josephp97/pi_control_hub_dev:$tagname --build-arg ros_version=$ros_version .devcontainer/
	fi
}
function print_help {
	echo
	echo "This script builds and pushes the ros-ceres image "
	echo "You can set the ros and ceres version (no gurante "
	echo "that every combination will build ...)"
	echo
	echo "Usage:"
	echo
	echo "	$(basename "$0") [-h -r <ros_version>  -C] "
	echo
	echo "Where:"
	echo
	echo "	-h	Display help and exit"
	echo "	-r	ros_version"
	echo "	-C	cross compile for ARM"
	echo
}

# Run script
main "$@"

# We should not end up here
exit 42
