#include <iostream>
#include <eigen3/Eigen/Dense>



int main(){
	
	Eigen::Matrix2d matrizA;
	Eigen::Matrix2d matrizB;
	Eigen::Matrix2d matrizC;
	
	matrizA << 1, 2, 3, 4; 	
	matrizB << 1, 2, 3, 4;
	
	//operaciones element wise
	
	matrizC = matrizA.array()*matrizB.array();
	std::cout << "Operaciones element wise A*B \n" << matrizC << std::endl; 

	matrizC = matrizA.array()/matrizB.array();
	std::cout << "Operaciones element wise A/B \n" << matrizC << std::endl; 

	matrizA = matrizB.array()*4;
	std::cout << "Operaciones element wise A=B*4 \n" << matrizA << std::endl; 

	//operaciones con matrices
	
	matrizC = matrizA + matrizB;
	std::cout << "Suma de matrices element wise C=A+B \n" << matrizC << std::endl; 

	matrizA += matrizB;
	std::cout << "Suma de matrices element wise A=A+B \n" << matrizA << std::endl; 

	matrizC = matrizA * matrizB;
	std::cout << "Multiplicaciòn de matrices element wise C=A*B \n" << matrizC << std::endl; 
	
	

	return 0;	
}
