#pragma once
#include <vector>
#include <iostream>

template <typename T>
    class Matrix{
        private:
            T** elems;
            int rowsNum;
            int colsNum;
        public:
            Matrix();
            Matrix(const int rows, const int cols);
            ~Matrix();
            void test();
            void print();
    };


template <typename T>
  Matrix<T>::Matrix() {}


template <typename T>
  Matrix<T>::Matrix(const int rows, const int cols){
    this->rowsNum = rows;
    this->colsNum = cols;

    elems = new T*[rows];
    for(int i = 0; i < rows; i++)
        elems[i] = new T[cols];
    
    for(int i = 0; i < rows; i++)
        for(int k = 0; k < cols; k++)
            elems[i][k] = 0;
  }

template <typename T>
  Matrix<T>::~Matrix() {
  for(int i = 0; i < rowsNum; i++)
      delete[] elems[i];
  delete[] elems;
  }

template <typename T>
void  Matrix<T>::print(){
  for(int row = 0; row < rowsNum; row++){
      for(int col = 0; col < colsNum; col ++)
          std::cout << elems[row][col] << "  ";
      std::cout << '\n';
  }
}

  template <typename T>  
  void Matrix<T>::test(){
    std::cout << "Hello from Lib" << std::endl;
  }


