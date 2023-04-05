include_directories(../include)
set(matrixSRCS 
    matrix.hpp
)

add_library(matrix SHARED
    ${matrixSRCS}
)

set_target_properties(matrix PROPERTIES LINKER_LANGUAGE CXX)

