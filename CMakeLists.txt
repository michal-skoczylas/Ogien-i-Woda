cmake_minimum_required(VERSION 3.10)
project(MySFMLProject)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(MySFMLProject main.cpp)
target_link_libraries(MySFMLProject sfml-graphics sfml-audio)