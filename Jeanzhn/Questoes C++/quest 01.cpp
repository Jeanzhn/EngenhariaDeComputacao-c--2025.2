#include <iostream>
int main(){
	int numInicial;
	
	std::cout << "Coloca um numero inteiro pra ver se � par ou impar: ";
	std::cin >> numInicial;
	
	if (numInicial % 2 == 0){
		std::cout <<"o numero que voce colocou � par" << std::endl;
	} else {
		std::cout << "ele � impar" << std::endl;
	}	
}

