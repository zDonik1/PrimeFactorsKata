cmake_minimum_required(VERSION 3.14)

project(PrimeFactorsKata CXX)

# ==== CONFIGURATION ====

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# ==== BUILDING TARGET ==== #

set(HEADERS
    prime_factors.h
)

set(CLASS_SOURCES
    prime_factors.cpp
)

list(TRANSFORM HEADERS PREPEND ${CMAKE_CURRENT_LIST_DIR}/src/)
list(TRANSFORM CLASS_SOURCES PREPEND ${CMAKE_CURRENT_LIST_DIR}/src/)

add_library(${PROJECT_NAME} ${HEADERS} ${CLASS_SOURCES})

add_subdirectory(tests)
