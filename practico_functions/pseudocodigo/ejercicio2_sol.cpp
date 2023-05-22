#include <iostream>

using namespace std;

// Function prototype
void calculo_binario(int x);
/**
 * @brief recibe una cadena de caracteres y, en un ciclo for, recorre la cadena caracter por caracter.
 * Si encuentra que los caracteres del inicio y fin de la cadena no son iguales, indica que no es palíndromo y termina la función.
 * Si recorre toda la cadena y no encuentra diferencias, indica que es palíndromo.
 * @Input  - string
 * @Output - void
 */
int main() {
	int dividendo;
	cout<<"ingrese el numero a convertir en binario"<<endl;
	cin>>dividendo;
	calculo_binario(dividendo);
    return 0;
}
// Function definition
void calculo_binario(int x){
	int resto;
	do{	
		resto = x % 2;
		cout<<resto;
		x = x / 2;
	}while(x>0);
	}
