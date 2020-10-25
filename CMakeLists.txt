cmake_minimum_required(VERSION "3.7.1")

project("HelloWorld")

add_subdirectory("Folder1")
add_subdirectory("Folder2")

add_executable("${PROJECT_NAME}" "main.cpp")

target_link_libraries("${PROJECT_NAME}" PRIVATE "folder1" "folder2")

target_include_directories("${PROJECT_NAME}" PUBLIC "folder1" "folder2")