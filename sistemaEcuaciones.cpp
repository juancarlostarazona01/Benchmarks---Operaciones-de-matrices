#include <iostream>
#include <eigen3/Eigen/Dense>


int main(){
	
	Eigen::MatrixXf matrizA(3, 4);

	matrizA << 1, 1, 1, 6, 1, 2, 5, 12, 1, 4, 25, 36;
	std::cout<< " matriz element wise A \n"<<  matrizA <<std::endl; 
		 
	return 0;	
}