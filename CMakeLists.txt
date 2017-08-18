cmake_minimum_required(VERSION 3.8)
project(ListasICC)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES Lista10/questao1.c Lista10/questao2.c)
add_executable(ListasICC ${SOURCE_FILES})