cmake_minimum_required(VERSION 3.25)
project(reservations)

set(CMAKE_CXX_STANDARD 17)

add_executable(reservations main.cpp globalFile.h student.h student.cpp  admin.cpp teacher.cpp identity.cpp)
