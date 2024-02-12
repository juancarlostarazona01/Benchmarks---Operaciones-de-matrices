#include <iostream>
#include <eigen3/Eigen/Dense>



int main(){
	int n;
	Eigen::Matrix3d matrizA;
	Eigen::Matrix3d matrizB;
	Eigen::Matrix3d matrizC;
	
	matrizA << 1, 0, 1, 0, 1, 0, 0, 0, 1;
	
	std::cout << "Digite a que numero quiere poptenciar la matriz \n" <<std::endl;
	std::cin << n; 
	
	for(int i=0; i<matrizA.array(); i++){
		std::cout <<  pow(matrizA.array(), n) << " " <<std::endl; 	 
	} 
	
	return 0;	
}
