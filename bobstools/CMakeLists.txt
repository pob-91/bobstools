cmake_minimum_required(VERSION 3.16)
project(bobstools)

set(CMAKE_CXX_STANDARD 14)

set(CURL_LIBRARY -lcurl)
find_package(CURL REQUIRED)

add_executable(bobstools main.cpp)

include_directories(${CURL_INCLUDE_DIR})
target_link_libraries(bobstools ${CURL_LIBRARIES})