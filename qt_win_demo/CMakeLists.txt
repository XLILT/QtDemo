cmake_minimum_required(VERSION 3.1.0)

project(main)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)

# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)

# Create code from a list of Qt resouce files
set(CMAKE_AUTORCC ON)

set(Qt5_DIR "C:\\Qt\\Qt5.10.0\\5.10.0\\msvc2017_64\\lib\\cmake\\Qt5")

# Find the QtWidgets library
find_package(Qt5 COMPONENTS Core Quick Widgets QuickWidgets REQUIRED)

# Populate a CMake variable with the sources
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} CUR_DIR_SRCS)

file(GLOB QRC_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.qrc")

# Tell CMake to create the main executable
add_executable(${PROJECT_NAME} ${CUR_DIR_SRCS} ${QRC_SRCS})

# Use the Widgets module from Qt 5
target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Quick Qt5::Widgets Qt5::QuickWidgets)