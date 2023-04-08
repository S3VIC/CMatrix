cmake_minimum_required(VERSION 3.20)

project(CMatrix VERSION 0.1)

set(CMAKE_CXX_STANDARD 17
    CMAKE_CXX_STANDARD_REQUIRED True)

set(LIBRARY_OUTPUT_PATH "${CMAKE_BINARY_DIR}/lib")
set(EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}") 

set(CMAKE_PREFIX_PATH "${PROJECT_BINARY_DIR}/lib")
add_subdirectory(src)


add_executable(test
    main.cpp
)

find_library(ADDITIONAL_LIBS NAMES matrix HINTS ${CMAKE_PREFIX_PATH})

target_include_directories(test PUBLIC 
    ${PROJECT_SOURCE_DIR}/src
)

target_link_libraries(test PUBLIC ${ADDITIONAL_LIBS})
