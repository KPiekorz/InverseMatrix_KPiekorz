#include <iostream>
#include <iomanip>
#include <iostream>

#include "../inc/matrixlib.h"

using namespace std;

int main() {

    Matrix<double> a={
            { 17.2,    24.4,    1.5  },
            { 23.8,     5.1,    7.4  },
            {  4.9,     6.4,    13.2 }
    };

    Matrix <double> b(2,2,10); //2x2 matrix with each cell set to 10
    b[1][1]=5;
    b.AppendCol(100); //initialize each element of the new column with 100;
    b.AppendRow(20);

    cout << "matrix b:\n" << b << endl;

    cout << "matrix a:\n" << a << endl;

    /* There are also some linear algebra functions */
    cout<<"The determinant of a is: "<<a.Det()<<endl;
    cout<<"3*a=\n"<<3.0*a<<endl;
    cout<<"The inverse of a is:\n"<<a.Inv()<<endl;
    cout<<"a*b=:\n"<<a*b<<endl;

    return 0;
}
