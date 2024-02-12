#include <iostream>
#include <eigen3/Eigen/Dense>


int main(){
	
	Eigen::MatrixXf matrizA(3, 4);

	matrizA << 2, -1, 0, 7, 1, 0, 1, 3, 3, 2, 7, 7;
	std::cout<< " matriz element wise A \n"<<  matrizA <<std::endl; 

	matrizA.row(0).array() -=2*matrizA.row(1).array();
	matrizA.row(2).array() -=3*matrizA.row(1).array();
	matrizA.row(2).array() +=2*matrizA.row(0).array();


	std::cout<< " matriz inversa element wise A \n"<< matrizA <<std::endl; 
		 
	return 0;	
}