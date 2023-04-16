include_directories(../include)

#target_include_directories(matrix PRIVATE "{PROJECT_SOURCE_DIR}/include")

set(matrixSRCS 
    matrixClass.hpp
    operations.hpp
    specialMatrices.hpp
)

add_library(matrix SHARED
    ${matrixSRCS}
)
set_target_properties(matrix PROPERTIES LINKER_LANGUAGE CXX)

