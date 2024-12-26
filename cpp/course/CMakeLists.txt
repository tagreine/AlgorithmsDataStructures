cmake_minimum_required(VERSION 3.25)
project(Course1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Course1
        week1/APlusB.cpp
        week1/MaxPairwiseProduct.cpp
        week2/fibonacci.cpp
        week2/fibonacci_huge.cpp
        week2/fibonacci_last_digit.cpp
        week2/fibonacci_sum_last_digit.cpp
        week2/gcd.cpp
        week2/lcm.cpp
        week3/car_fueling.cpp
        week3/change.cpp
        week3/fractional_knapsack.cpp
        week4/binary_search.cpp
        week4/inversions.cpp
        week4/majority_element.cpp
        week4/sorting.cpp)
