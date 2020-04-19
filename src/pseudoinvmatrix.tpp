
#include "../inc/pseudoinvmatrix.h"

template<class T>
Matrix<T> PseudoInvMatrix<T>::Trans() {

    Matrix<T> trans_matrix;

    cout << PseudoInvMatrix<T>::N << endl;
    cout << PseudoInvMatrix<T>::M << endl;

    cout << "Hej: " << PseudoInvMatrix<T>::mat[0][2] << endl;

    return trans_matrix;
}
