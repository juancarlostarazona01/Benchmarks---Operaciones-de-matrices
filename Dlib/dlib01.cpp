#include <iostream>
#include <dlib/matrix.h>

using namespace std;

int main(){
    //Definiciones
    dlib::matrix<double, 3, 1> matrizY;
    //Se crea una matriz dinàmica
    dlib::matrix<double> matrizW(3, 3);
    //Se quiere cambiar el tamaño de la matrizD
    //matrizD.set_size(6, 6);

    //Inicializaciones
    dlib::matrix<double> matrizD(3, 3);     
    matrizD = 1.2, 1.7, 3.4, 5.7, 3.2, 4.4, 6.7, 5.3, 4.2;
    cout<< "Matriz dinàmica 3x3: \n" << matrizD <<endl;

    double vector[] = {1, 2, 3, 4, 5, 6};
    //Se crea una matriz de 2x3
    auto matriz2x3 = dlib::mat(vector, 2, 3);
    cout<< "Matriz heredada \n" << matriz2x3 <<endl;

    //Se requiere cambiar en la matrizD el valor en la posicion (1, 2) a 380
    matrizD(1, 2) = 300;
    cout<< "Matriz dinàmica 3x3: \n" << matrizD <<endl;
    
    //Inicializar la matriz con algunos valores predefinidos
    auto matrizIdentidad = dlib::identity_matrix<double>(3);
    cout<< "Matriz identidad: \n" << matrizIdentidad <<endl;

    //Inicializar la matriz con 1
    auto matrizDeUnos = dlib::ones_matrix<double>(3, 4);
    cout<< "Matriz de unos: \n" << matrizDeUnos <<endl;

    //Inicializar la matriz con numeros aleatorios
    auto matrizAleatoria = dlib::randm(3, 4);
    cout<< "Matriz aleatoria de 3x4: \n" << matrizAleatoria <<endl;
    
    return 0;
}