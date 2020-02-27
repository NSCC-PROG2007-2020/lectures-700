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
add_executable(switch decisions/switch/main.c)

add_executable(simple_array arrays/simple_array/main.c)
add_executable(simple_strings arrays/simple_strings/main.c)
add_executable(multi_arrays arrays/multi_arrays/main.c)

add_executable(math_functions functions/math_functions/main.c)
add_executable(static_variables functions/static_variables/main.c)
add_executable(array_params functions/array_params/main.c)
add_executable(two_dim_function functions/two_dim_function/main.c)

add_executable(simple_ptr pointers/simple_pointer/main.c)
add_executable(string_ptr pointers/string_pointers/main.c)