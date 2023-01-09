#!/bin/sh

# setup multiarch docker
docker run --rm --privileged multiarch/qemu-user-static:6.1.0-8 --reset -p yes && 
docker buildx create --name multiarch --driver docker-container --use &&
docker buildx inspect --bootstrap
