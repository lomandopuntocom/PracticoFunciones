#include <iostream>
#include <string>

using namespace std;

// Function prototype
void contador_palindromo(string str);

/**
 * @brief recibe una cadena de caracteres y, en un ciclo for, recorre la cadena caracter por caracter.
 * Si encuentra que los caracteres del inicio y fin de la cadena no son iguales, indica que no es palíndromo y termina la función.
 * Si recorre toda la cadena y no encuentra diferencias, indica que es palíndromo.
 * @Input  - string
 * @Output - void
 */
int main() {
	string linea;
	getline(cin,linea);
    //call functions here
    contador_palindromo(linea);
    return 0;
}

// Function definition
void contador_palindromo(string str){
	for(int i=0, e=str.size()-1; i<str.size()/2 && e>str.size()/2; ++i,--e) {
		if(str[e]!=str[i]){
			cout<<"No es palindromo"<<endl;
			return;
		}
	}
	cout<<"Es palindromo"<<endl;
}
