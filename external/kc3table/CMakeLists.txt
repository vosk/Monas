# WELCOME 
# This is the main cmake configuration file 
# associated with your project
# You can define specific compilation options here
# More about cmake : www.cmake.org
# Using cmake command line : 
# 1. Create a build directory : mkdir build
# 2. Configure cmake project : cd build; cmake ..
#   You can also generate project with your favorite IDE : 
#   Example : For Mac osx use "cmake .. -G XCode"
#   see cmake help for more information
# 3. Edit project option : ccmake .
# 4. Build it : make 

cmake_minimum_required(VERSION 2.6.4 FATAL_ERROR)


SET (SRCS
    src/kc3table.cpp
    src/classifier.h
)

add_executable(kc3table ${SRCS})
