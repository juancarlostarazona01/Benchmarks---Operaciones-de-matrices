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
	
	matrizA.row(1).array() += 3;
	std::cout << "MatrizA cambio valores fila\n" << matrizA << std::endl;

	matrizA.col(2).array() /= 4;
	std::cout << "MatrizA cambio valores columna\n" << matrizA << std::endl;

	Eigen::MatrixXf matrizC = Eigen::MatrixXf::Random(2, 4);
	std::cout << "MatrizA aleatoria con tipo matrix\n" << matrizC << std::endl;

	Eigen::VectorXf vector(2);
	vector << 100, 100;

	matrizC.colwise() += vector;
	std::cout << "MatrizC.colwise \n" << matrizC << std::endl;





	return 0;	
}
