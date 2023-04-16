#include "matrixClass.hpp"

template <typename T>
    Matrix<T> eye(const int rows, const int cols){
      if(rows == cols){
        Matrix<T> matrix = Matrix<T>(rows, cols);
        for(int row = 0; row < rows; row++)
            for(int col = 0; col < cols; col++)
                matrix.setElem(row, col, 1);
        return matrix;
      }
      else{
        Matrix<T> matrix = Matrix<T>(); 
        return matrix;
      }
    }
