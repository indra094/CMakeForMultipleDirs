cmake_minimum_required(VERSION "3.7.1")

project("HelloWorld")

set(CMAKE_FIND_USE_PACKAGE_ROOT_PATH TRUE)
cmake_policy(SET CMP0074 NEW)

set(BOOST_ROOT C:/Boost/boost_1_76_0)

find_package(BOOST 1.76.0 REQUIRED filesystem system)
include_directories( ${Boost_INCLUDE_DIR} )

#set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)
add_subdirectory("Folder1")
add_subdirectory("Folder2")

add_executable("${PROJECT_NAME}" ${SOURCE_FILES})

target_link_libraries("${PROJECT_NAME}" PRIVATE "folder1" "folder2" "C:/Boost/boost_1_76_0/stage/lib/libboost_filesystem-mgw9-mt-d-x32-1_76.a")

target_include_directories("${PROJECT_NAME}" PUBLIC "Folder1" "Folder2")