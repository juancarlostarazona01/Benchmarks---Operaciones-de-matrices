#include <iostream>
#include <eigen3/Eigen/Dense>



int main(){
	int n=2;
	Eigen::Matrix3d matrizA;

	matrizA << 1, -1, 0, 0, 1, 0, 2, 0, 1;
	std::cout<< " matriz element wise A \n"<<  matrizA <<std::endl; 
	
	matrizA.col(2) = matrizA.col(2) - (2*matrizA.col(0));
	matrizA.col(0) = matrizA.col(0) + matrizA.col(1);
	matrizA.col(2) = matrizA.col(2) - (2*matrizA.col(1));
	
	std::cout<< " matriz inversa element wise A \n"<<  matrizA <<std::endl; 
		 
	return 0;	
}
