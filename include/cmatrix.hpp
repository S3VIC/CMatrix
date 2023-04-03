#pragma once
#include <vector>
#include <iostream>

namespace CMatrix {
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
}
