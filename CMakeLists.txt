cmake_minimum_required(VERSION 3.15)
project(lectures_700 C)

set(CMAKE_C_STANDARD 11)

add_executable(helloworld helloworld/main.c)

add_executable(c_to_f celsius_to_fahrenheit/main.c)
add_executable(character character/main.c)
add_executable(polynomial polynomial/main.c)
add_executable(scientific_notation scientific_notation/main.c)
add_executable(even_multiple even_multiple/main.c)
add_executable(conversions conversions/main.c)