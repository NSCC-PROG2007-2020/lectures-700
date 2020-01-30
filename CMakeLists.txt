cmake_minimum_required(VERSION 3.15)
project(lectures_700 C)

set(CMAKE_C_STANDARD 11)

add_executable(helloworld variables/helloworld/main.c)
add_executable(c_to_f variables/celsius_to_fahrenheit/main.c)
add_executable(character variables/character/main.c)
add_executable(polynomial variables/polynomial/main.c)
add_executable(scientific_notation variables/scientific_notation/main.c)
add_executable(even_multiple variables/even_multiple/main.c)
add_executable(conversions variables/conversions/main.c)