cmake_minimum_required(VERSION 3.17)

include(${CMAKE_SOURCE_DIR}/utilities/CMakeUtilities.txt)

project(text-adventure)

file(GLOB_RECURSE SOURCE_FILES ./source/*.cpp ./source/*.h)
SOURCE_GROUP_BY_FOLDER(${PROJECT_NAME})

add_executable(${PROJECT_NAME} ${SOURCE_FILES})