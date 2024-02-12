#include <iostream>
#include <dlib/matrix.h>

using namespace std;

int main(){
    
    //Operaciones aritmeticas
    dlib::matrix<double> matrizA(3, 3);
    matrizA = dlib::ones_matrix<double>(3, 3);
    cout<< "Matriz de unos: \n" << matrizA <<endl;

    dlib::matrix<double> matrizB(3, 3);
    matrizB = 5, 5, 5, 5, 5, 5, 5, 5, 5;
    cout<< "Matriz de cincos: \n" << matrizB <<endl;



    return 0;
}