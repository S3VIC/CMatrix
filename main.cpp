#include<iostream>
#include "operations.hpp"

int main(void){
  Matrix<int> matrix = Matrix<int>(2,2);
  Matrix<int> matrixB = Matrix<int>(2,2);
  matrixB.toEye();
  matrix.toEye();
  Matrix<int> added;
  added = matrix + matrixB;
  added.print();
  //matrix.test();
  return 0;
}
