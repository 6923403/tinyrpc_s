cmake_minimum_required(VERSION 3.10)
project(tinyrpc_s)

#set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -std=c++11 -Wall -Wno-deprecated -Wno-unused-but-set-variable")


aux_source_directory(/usr/include/tinyrpc/comm COMM)
aux_source_directory(/usr/include/tinyrpc/coroutine COR)
aux_source_directory(/usr/include/tinyrpc/net NET)
aux_source_directory(/usr/include/tinyrpc/net/http HTTP)
aux_source_directory(/usr/include/tinyrpc/net/tcp TCP)
aux_source_directory(/usr/include/tinyrpc/net/tinypb TINYPB)
# 使用该变量作为add_library的参数
set(tinyrpc ${COMM} ${COR} ${NET} ${HTTP} ${TCP} ${TINYPB} ${COXTX})
find_package(Protobuf REQUIRED)
set(tinyxml /usr/lib/libtinyxml.a)
set(LIBS
        tinyrpc
        ${Protobuf_LIBRARY}
        ${tinyxml}
        dl
        pthread
        )

add_executable(tinyrpc_s
        test_tinypb_server.cc
        test_tinypb_server.pb.cc)

target_link_libraries(tinyrpc_s ${LIBS})
