#include "cmatrix.hpp"

namespace CMatrix{
   template<typename T>
   Matrix<T>::Matrix()
   {}
   template<typename T>
   Matrix<T>::~Matrix()
   {}
   template<typename T>
   void Matrix<T>::test(){
    std::cout << "Hello world!" << '\n';
   } 
}