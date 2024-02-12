#include <iostream>
#include <eigen3/Eigen/Dense>



int main(){
	
	Eigen::Matrix3d matrizA;
	Eigen::Matrix3d matrizB;
	Eigen::Matrix3d matrizC;
	
    matrizA << 2, 0, 1, 3, 0, 0, 5, 1, 1;
	matrizB << 1, 0, 1, 1, 2, 1, 1, 1, 0; 
	
	//operaciones element wise 
	matrizC = matrizA.array()+matrizB.array();
	std::cout << "Operacion basica element wise A+B \n" << matrizC << std::endl; 

	matrizC = matrizA.array()-matrizB.array();
	std::cout << "Operacion basica wise A-B \n" << matrizC << std::endl; 

	matrizC = matrizA.array()*matrizB.array();
	std::cout << "Operacion basica wise A*B \n" << matrizC << std::endl; 

	matrizC = matrizB.array()*matrizA.array();
	std::cout << "Operacion basica wise B*A \n" << matrizC << std::endl; 
	
	std::cout << "Operacion basica wise A^t \n" << matrizC.transpose() << std::endl;
	
	
	
	return 0;	
}
