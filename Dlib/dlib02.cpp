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

    auto matrizC = matrizA + matrizB;
    cout<< "Suma de la matriz a y b: \n" << matrizC <<endl;

    auto matrizD = matrizA * matrizB;
    cout<< "Producto de las matrices a y b: \n" << matrizD <<endl;

    matrizA += 5;
    cout<< "Sumar 5 a la matrizA: \n" << matrizA <<endl;

    //multiplicacion por elementos (element wise)
    auto matrizLWise = dlib::pointwise_multiply(matrizA, matrizB);
    cout<< "matriz element wise: \n" << matrizLWise <<endl;

    auto matrizT = dlib::trans(matrizA);
    cout<< "matriz transpuesta: \n" << matrizT <<endl;

    dlib::matrix<float> matrizAccess(4, 4);
    matrizAccess = 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16;
    auto subMatrizAccess = dlib::subm(matrizAccess, dlib::rectangle(0, 0, 1, 2));
    cout<< "matriz access: \n" << matrizAccess <<endl;
    cout<< "Submatriz de la matriz Access: \n" << subMatrizAccess <<endl;

    auto subMatrizAccess2 = dlib::subm(matrizAccess, dlib::rectangle(1, 1, 2, 2));
    cout<< "Submatriz de la matriz Access 2: \n" << subMatrizAccess2 <<endl;

    //actualizar los valores en el rectangulo de la matriz 0, 0, 1, 2
    dlib::set_subm(matrizAccess, dlib::rectangle(0, 0, 1, 2)) = 100;
    cout<< "matriz access actualizada: \n" << matrizAccess <<endl;

    //Simulaciòn de un broadcasting con acceso parcial
    dlib::matrix<float, 2, 1> vector;
    vector = 10, 10;
    cout << "vector \n" << vector <<endl;

    dlib::matrix<float, 2, 3> matrizF;
    matrizF = 1, 2, 3, 4, 5 ,6;
    cout << "matriz 2x3\n" << matrizF <<endl;

    for(int i=0; i<matrizF.nc(); i++){
        dlib::set_colm(matrizF, i) += vector;
    }
    cout << "matriz 2x3 actualizada por columnas\n" << matrizF <<endl;
    return 0;
}