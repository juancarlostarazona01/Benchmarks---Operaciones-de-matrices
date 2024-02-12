#include <iostream>
#include <eigen3/Eigen/Dense>


int main(){
	
	Eigen::Matrix2d matrizA;
	Eigen::Matrix2d matrizB;
	Eigen::Matrix2d matrizC;
	Eigen::Matrix2d matrizI;
	Eigen::Matrix2d matrizX;

	matrizA << 1, 1, 3, 4;
	matrizB << 2, 1, 1, 1;
	matrizC << 1, 2, 1, 3;
	matrizI << 1, 0, 0, 1;

	matrizX = (matrizB.array()+matrizI.array())/matrizA.array();
	std::cout<< " ecuaciones incognita de matriz 1 wise A \n"<< matrizX <<std::endl; 

	matrizX = (matrizC.array()-matrizB.array())/matrizA.array();
	std::cout<< " ecuaciones incognita de matriz 1 wise A \n"<< matrizX <<std::endl;

	matrizX = (2*matrizC.array()-matrizB.array())/matrizA.array();
	std::cout<< " ecuaciones incognita de matriz 1 wise A \n"<< matrizX <<std::endl; 

	matrizX = matrizC.array()/(matrizA.array()+matrizB.array());
	std::cout<< " ecuaciones incognita de matriz 1 wise A \n"<< matrizX <<std::endl; 

	matrizX = 2*matrizC.array()/(matrizA.array()*matrizB.array()-matrizC.array());
	std::cout<< " ecuaciones incognita de matriz 1 wise A \n"<< matrizX <<std::endl; 

	return 0;	
}