#pragma once
#include <vector>
#include <iostream>

template <typename T>
    class Matrix{
        private:
            std::vector<T> rows;
            std::vector<T> columns;
        public:
            Matrix();
            ~Matrix();
            void test();
    };


template <typename T>
  Matrix<T>::Matrix() {}

template <typename T>
  Matrix<T>::~Matrix() {}

  template <typename T>  
  void Matrix<T>::test(){
    std::cout << "Hello from Lib" << std::endl;
  }
