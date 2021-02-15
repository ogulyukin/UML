cmake_minimum_required(VERSION 3.17)
project(UML)

set(CMAKE_CXX_STANDARD 14)

add_executable(UML main.cpp Text.cpp FileNextReader.cpp TextReader.cpp TextReader.h ConsoleReader.cpp ConsoleReader.h)