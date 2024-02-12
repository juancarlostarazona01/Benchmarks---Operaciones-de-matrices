#include <iostream>
#include <eigen3/Eigen/Dense>

//crear matriz dinamica, osea que puede tener el tamanio que se quiera
//Eigen::dynamic asi se le llama a al interfaz
typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> MiMatrizDinamicaD;

int main(){
	MiMatrizDinamicaD matriz1(3, 3);
	MiMatrizDinamicaD matriz2(3, 3);

	MiMatrizDinamicaD v1(3, 1);
	MiMatrizDinamicaD v2(3, 1);
	
	matriz1 << 1, 2, 3, 4, 5, 6, 7, 8, 9;
	matriz2 << 10, 12, 13, 14, 15, 16, 17, 18, 19;	
		
	v1 << 1, 2, 3;
	v2 << 4, 5 ,6;	
		
		
	std::cout << "Matriz1 + Matriz2 = \n" << matriz1 + matriz2 << std::endl; 
	std::cout << "Matriz1 - Matriz2 = \n" << matriz1 - matriz2 << std::endl;
	std::cout << "v1 + v2 = \n" << v1 + v2 << std::endl; 
	std::cout << "v1 - v2 = \n" << v1 - v2 << std::endl; 








	return 0;	
}
