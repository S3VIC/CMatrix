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
            //operators
            Matrix<T>& operator+(const Matrix<T>& other);
            Matrix<T>& operator=(const Matrix<T>& other);
            void test();
            void print();
            // getters
            int getRowsNum() const;
            int getColsNum() const;
            T** getElems() const;
            // setters
            void setElem(const int& row, const int& col, const T& value);
    };


template <typename T>
  Matrix<T>::Matrix()
    : elems(nullptr), rowsNum(0), colsNum(0)
{}


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
      for(int col = 0; col < colsNum; col++)
          std::cout << elems[row][col] << "  ";
      std::cout << '\n';
  }
}

//getters
template <typename T>
  int Matrix<T>::getRowsNum() const{ return rowsNum; }

template <typename T>
  int Matrix<T>::getColsNum() const{ return colsNum; }

template <typename T>
  T** Matrix<T>::getElems() const {return elems; }

//setters
template <typename T>
  void Matrix<T>::setElem(const int& row, const int& col, const T& value) { elems[row][col] = value; }

//operators
template <typename T>
  Matrix<T>&  Matrix<T>::operator+(const Matrix<T>& other){
    if((rowsNum == other.rowsNum) and (colsNum == other.colsNum)){
       for(int row = 0; row < rowsNum; row++)
          for(int col = 0; col < colsNum; col++)
             elems[row][col] = elems[row][col] + other.elems[row][col];
    return *this;
    }
    else{
      std::cout << "Dimensions do not match!" << '\n';
      return *this;
    }
  }
 
template <typename T>
  Matrix<T>& Matrix<T>::operator=(const Matrix<T>& other){
    if(this == &other)
       return *this;

    const int newRowsNum = other.getRowsNum();
    const int newColsNum = other.getColsNum();

    for(int row = 0; row < rowsNum; row++)
        delete[] elems[row];

    delete[] elems;

    T** temp = new T*[newRowsNum];
    for(int row = 0; row < newRowsNum; row++)
        temp[row] = new T[newColsNum];
    
    elems = temp;
   
    for(int row = 0; row < newRowsNum; row++)
        for(int col = 0; col < newColsNum; col++)
            elems[row][col] = other.elems[row][col];
    
    rowsNum = newRowsNum;
    colsNum = newColsNum;
    return *this;
  }
