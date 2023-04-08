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
            Matrix(const int &rows, const int &cols);
            ~Matrix();
            void test();
            void print();
            void toEye();
            void addInternally(const Matrix& matrixB);
            // getters
            int getRowsNum() const;
            int getColsNum() const;
            T** getElems() const;
    };


template <typename T>
  Matrix<T>::Matrix() {}


template <typename T>
  Matrix<T>::Matrix(const int &rows, const int &cols){
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
  void Matrix<T>::addInternally(const Matrix<T>& matrixB){
    bool matrixACheck = (rowsNum > 1) and (colsNum > 1);
    bool matrixBCheck = (matrixB.rowsNum > 1) and (matrixB.colsNum > 1);

    if(matrixACheck and matrixBCheck){
      if((rowsNum == matrixB.rowsNum) and (colsNum == matrixB.colsNum))
          for(int row = 0; row < rowsNum; row++)
              for(int col = 0; col < colsNum; col++)
                  this->elems[row][col] += matrixB.elems[row][col];
      else
          std::cout << "Matrix dimensions do not match!" << '\n';
    }
  }

template <typename T>
  void Matrix<T>::toEye(){
    if((rowsNum > 1) and (colsNum > 1))
      for(int row = 0; row < rowsNum; row++)
        for(int col = 0; col < colsNum; col++)
            if(row == col)
              this->elems[row][col] = 1;    
  }

template <typename T>  
  void Matrix<T>::test(){
    std::cout << "Hello from Lib" << std::endl;
  }

//getters

template <typename T>
  int Matrix<T>::getRowsNum() const{ return rowsNum; }

template <typename T>
  int Matrix<T>::getColsNum() const{ return colsNum; }

template <typename T>
  T** Matrix<T>::getElems() const {return elems; }
