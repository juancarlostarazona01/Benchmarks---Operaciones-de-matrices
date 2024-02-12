#include <iostream>
#include <eigen3/Eigen/Dense>



int main(){
	
	Eigen::Matrix3d matrizA;
	Eigen::Matrix3d matrizB;
	Eigen::Matrix3d matrizC;
	
	matrizA << 0, 1, 1, 1, 0, 1, 1, 1, 0;
	matrizB << 1, 0, 0, 0, 1, 0, 0, 0, 1;
	
	//operaciones element wise 
	matrizC = (matrizA.array()*matrizA.array())-matrizA.array();
	std::cout << "Demostracion element wise A^2-A-2I=0 \n" << matrizC <<std::endl; 
	
	return 0;	
}
