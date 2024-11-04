cmake_minimum_required(VERSION 3.23)
project(webserver)

set(CMAKE_CXX_STANDARD 14)

include_directories("D:\\MySQL\\MySQL Server 8.0\\include")
link_directories("D:\\MySQL\\MySQL Server 8.0\\lib")

add_executable(webserver main.cpp include/User.cpp include/User.h)

# 链接MySQL Connector库
target_link_libraries(webserver PRIVATE libmysql)