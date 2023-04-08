#include "matrixClass.hpp"

template <typename T>
    Matrix<T>* add(const Matrix<T>& A, const Matrix<T>& B){
      if((A.getRowsNum() == B.getRowsNum()) and (A.getColsNum() == B.getColsNum()))
      {
        const int resultRows = A.getRowsNum();
        const int resultCols = A.getColsNum();
        Matrix<T> *resultMatrix = new Matrix<T>(resultRows, resultCols);
          for(int row = 0; row < resultRows; row++)
              for(int col = 0; col < resultCols; col++)
                  resultMatrix->getElems()[row][col] += (A.getElems()[row][col] + B.getElems()[row][col]);
        return resultMatrix;
      }
      else{
        std::cout << "Dimensions do not match" << '\n';
        return nullptr;
      }
    }
