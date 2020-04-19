
#include "../inc/pseudoinvmatrix.h"

template<class T>
Matrix<T> PseudoInvMatrix<T>::Trans() {

    int NN = PseudoInvMatrix<T>::N;
    int MM = PseudoInvMatrix<T>::M;

    Matrix<T> trans_matrix(PseudoInvMatrix<T>::M, PseudoInvMatrix<T>::N, 0);

    cout << PseudoInvMatrix<T>::N << endl;
    cout << PseudoInvMatrix<T>::M << endl;
    cout << "Hej: " << PseudoInvMatrix<T>::mat[0][2] << endl;

    for(int i = 0; i < NN; i++){
        for(int j = 0; j < MM; j++){
            trans_matrix[j][i] = PseudoInvMatrix<T>::mat[i][j];
        }
    }

    return trans_matrix;
}
