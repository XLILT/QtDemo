cmake_minimum_required(VERSION 2.8.12)

project(01_qml LANGUAGES CXX)

set(Qt5_DIR "C:\\Qt\\Qt5.10.0\\5.10.0\\msvc2017_64\\lib\\cmake\\Qt5")
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Quick REQUIRED)

add_executable(${PROJECT_NAME} "main.cpp" "qml.qrc")

target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Quick)
