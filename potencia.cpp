#include <iostream>
#include <eigen3/Eigen/Dense>



int main(){
	int n=2;
	Eigen::Matrix3d matrizA;

	matrizA << 1, 0, 1, 0, 1, 0, 0, 0, 1;
	
	//std::cout << "Digite a que numero quiere poptenciar la matriz \n" <<std::endl;
	//std::cin << n; 
	
	for(int i=0; i<n; i++){
		matrizA.array() *= matrizA.array();	
	} 
	
	std::cout<< " n-esima potencia element wise A^n \n"<<  matrizA <<std::endl; 
		 
	return 0;	
}
