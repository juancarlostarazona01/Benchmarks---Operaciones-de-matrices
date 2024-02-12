#include <iostream>
#include <eigen3/Eigen/Dense>

//crear matriz dinamica, osea que puede tener el tamanio que se quiera
//Eigen::dynamic asi se le llama a al interfaz
typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> MiMatrizDinamicaD;

int main(){
	MiMatrizDinamicaD matriz(3, 3);
	
	matriz << 1, 2, 3, 4, 5, 6, 7, 8, 9;
		
	std::cout << matriz << std::endl; 
	
	
	









	return 0;	
}
