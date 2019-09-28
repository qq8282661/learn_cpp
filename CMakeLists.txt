cmake_minimum_required(VERSION 3.14)
project(learn_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(learn_cpp
        def_func.cpp
        extern1.cpp
        extern2.cpp
        hello.cpp
        helloworld.cpp
        test.cpp pointer.cpp rand.cpp array.cpp my_struct.cpp my_time.cpp my_stream.cpp)
