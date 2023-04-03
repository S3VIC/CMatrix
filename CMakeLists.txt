cmake_minimum_required(VERSION 3.20)

project(CMatrix VERSION 0.1)

set(CMAKE_CXX_STANDARD 17
    CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

include_directories(src)

add_library(CMatrix 
 ./src/cmatrix.cpp
)
add_executable(example main.cpp)

target_link_libraries(CMatrix PUBLIC
    ${EXTRA_LIBS}
    )

target_include_directories(CMatrix PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${EXTRA_INCLUDES}"
)