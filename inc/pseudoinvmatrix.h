//
// Created by kpiekorz on 17.04.2020.
//

#ifndef INVERSEMATRIX_KPIEKORZ_PSEUDOINVMATRIX_H
#define INVERSEMATRIX_KPIEKORZ_PSEUDOINVMATRIX_H

#include "matrixlib.h"
#include <iostream>

using namespace std;

template <class T>
class PseudoInvMatrix : public Matrix<T> {

private:


public:
    using Matrix<T>::Matrix;

    Matrix<T> Trans();
    PseudoInv();

};



#include "../src/pseudoinvmatrix.tpp"

#endif //INVERSEMATRIX_KPIEKORZ_PSEUDOINVMATRIX_H
