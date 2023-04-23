cmake_minimum_required(VERSION 3.5)

project(grpc_test)

find_package(Protobuf REQUIRED)
find_package(gRPC REQUIRED)
find_package(Threads REQUIRED)
find_package(gRPC CONFIG REQUIRED)

set(CMAKE_CXX_STANDARD 17)

foreach(_target server client)
    
    add_executable(${_target} ${_target}.cc ./proto_src/hello.grpc.pb.cc ./proto_src/hello.pb.cc)

    target_link_libraries(${_target} gRPC::grpc++_reflection protobuf::libprotobuf gRPC::grpc++)

endforeach(_target server client)

