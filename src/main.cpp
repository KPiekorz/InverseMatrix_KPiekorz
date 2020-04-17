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

    cout <<a;

    cout<<"matrix a:\n"<<a<<endl;

    return 0;
}
