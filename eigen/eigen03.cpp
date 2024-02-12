#include <iostream>
#include <eigen3/Eigen/Dense>

//crear matriz dinamica, osea que puede tener el tamanio que se quiera
//Eigen::dynamic asi se le llama a al interfaz
typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> MiMatrizDinamicaD;

int main(){
	MiMatrizDinamicaD matriz1(3, 3);
	
	matriz1 = Eigen::Matrix<double, 3, 3>::Random(3, 3);
	 
	std::cout << " Matriz aleatoria \n" << matriz1 << std::endl; 
	
	std::cout << " Matriz transpuesta \n" << matriz1.transpose() << std::endl; 

	std::cout << " Matriz aleatoria \n" << matriz1 << std::endl; 

	matriz1.transposeInPlace();

	std::cout << " Matriz transpuesta \n" << matriz1 << std::endl; 



	
	return 0;	
}
