cmake_minimum_required(VERSION 3.17)
project(example)

set(CMAKE_CXX_STANDARD 20)

add_executable(example main.cpp lectura_entrada.cpp expresiones.cpp condiciones.cpp)