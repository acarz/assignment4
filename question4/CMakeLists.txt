cmake_minimum_required(VERSION 3.10)

project(GeneratorProject)

add_library( zafer FourVector/FourVector.cxx FourVector/FourVector.h )
target_include_directories( zafer PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/FourVector")


add_executable(generator FourVector/FourVector.cxx Generator.cxx)
target_include_directories(generator PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/FourVector")
