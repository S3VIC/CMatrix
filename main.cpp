#include<iostream>
#include "matrix.hpp"

int main(void){
  Matrix<int> matrix = Matrix<int>(2,2);
  matrix.test();
  matrix.print();
  std::cout << "Hello" << std::endl;
  return 0;
}
