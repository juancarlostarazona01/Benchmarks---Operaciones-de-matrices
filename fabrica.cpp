#include <iostream>
#include <eigen3/Eigen/Dense>


int main(){
	
	Eigen::MatrixXf matrizA(2, 3);
    Eigen::MatrixXf matrizB(3, 2);
    Eigen::Matrix2d matrizC;

	matrizA << 400, 200, 50, 300, 100, 30;
	std::cout<< " matriz element wise A \n"<<  matrizA <<std::endl; 
	matrizB << 25, 1, 30, 1.2, 33, 1.3;
	std::cout<< " matriz element wise B \n"<<  matrizB <<std::endl;

	//matrizC = matrizA.dot(matrizB);
	
	std::cout<< " matriz inversa element wise A \n"<< matrizC <<std::endl; 
		 
	return 0;	
}