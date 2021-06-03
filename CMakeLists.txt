cmake_minimum_required(VERSION 3.19)
project(PTC_projeto1)

set(CMAKE_CXX_STANDARD 11)

add_executable(Transmissor Tx/Transmissor.cpp Serial.cpp Serial.h)
add_executable(Receptor Rx/Receptor.cpp Serial.cpp Serial.h)
