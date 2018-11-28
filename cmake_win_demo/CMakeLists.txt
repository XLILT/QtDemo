cmake_minimum_required(VERSION 2.8)

set(PROJ_NAME main)

project(${PROJ_NAME})

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} CUR_DIR_SRCS)

add_executable(${PROJ_NAME} ${CUR_DIR_SRCS})