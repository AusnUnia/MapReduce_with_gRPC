#! /bin/bash

protoc --cpp_out=./proto_src ./proto_src/*.proto

GRPC_CPP_PLUGIN=grpc_cpp_plugin
GRPC_CPP_PLUGIN_PATH=`which ${GRPC_CPP_PLUGIN}`

protoc --grpc_out=./proto_src  --plugin=protoc-gen-grpc=${GRPC_CPP_PLUGIN_PATH} ./proto_src/*.proto 
