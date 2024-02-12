#include <iostream>
#include <eigen3/Eigen/Dense>



int main(){
	
	//Acceso parcial a las matrices que es el dato primitivo de la biblioteca eigen
	 
	Eigen::MatrixXf matrizA;
	
	matrizA = Eigen::MatrixXf::Random(4, 4);
	std::cout << "Matriz aleatoria con el tipo de dato Xf \n" << matrizA << std::endl; 
	
	//Se requiere una matriz que copie la mitad de la parte de la matrizA
	
	Eigen::Matrix2f matrizB;
	matrizB = matrizA.block(1, 1, 2, 2);	
	std::cout << "Mitad de la matrizA \n" << matrizB << std::endl; 
	
	//Cambiar los valores del bloque de la mitad de la matrizA a 0
	matrizA.block(1, 1, 2, 2) *= 0;
	//matrizA.block(1, 1, 2, 2) = matrizA.block(1, 1, 2, 2) * 0;	
	std::cout << "MatrizA \n" << matrizA << std::endl;
	
	return 0;	
}
