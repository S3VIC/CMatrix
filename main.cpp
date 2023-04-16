#include<iostream>
#include "operations.hpp"
#include "specialMatrices.cpp"

int main(void){
  Matrix<int> matrix = eye<int>(2,2);
  Matrix<int> matrixB = eye<int>(2,2);
  Matrix<int> added;
  added = matrix + matrixB;
  added.print();
  //matrix.test();
  return 0;
}
