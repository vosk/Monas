message ( STATUS "" )
message ( STATUS " _..::: Configuring KLocView :::.._ " )
message ( STATUS "" )
cmake_minimum_required(VERSION 2.6)

PROJECT( KLocView )
FIND_PACKAGE( OpenCV REQUIRED )
FIND_PACKAGE(Protobuf)

#add_executable ( stateTest statechartTest.cpp ../messages/planMsg.pb.cc )
#use_lib(KLocView LIBVISION OPENCV)
#find(OPENCV NO_MODULE QUIET)
#target_link_libraries ( stateTest statechartEngine narukom MonasCore GenLinux)

INCLUDE_DIRECTORIES( ${CMAKE_CURRENT_BINARY_DIR} ../../src/)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR})
message (STATUS ${CMAKE_BINARY_DIR})
# ${CMAKE_BINARY_DIR}
ADD_EXECUTABLE( KLocView KLocView.cpp  KfieldGui.cpp ../../external/PracticalSocket/PracticalSocket.cpp
          ../../src/messages/VisionObservations.pb.cc ../../src/messages/WorldInfo.pb.cc  ../../src/messages/motion.pb.cc)
TARGET_LINK_LIBRARIES( KLocView ${OpenCV_LIBS} ${PROTOBUF_LIBRARY} )


