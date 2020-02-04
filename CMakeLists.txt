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

add_executable(simple_for_loop loops/simple_for_loop/main.c)
add_executable(triangular_number loops/triangular_number/main.c)
add_executable(squares loops/squares/main.c)
add_executable(digit_sum loops/digit_sum/main.c)
add_executable(incrementer loops/incrementer/main.c)

add_executable(simple_if decisions/simple_if_statement/main.c)
add_executable(evenly_divisible decisions/evenly_divisible/main.c)
add_executable(divide decisions/divide/main.c)