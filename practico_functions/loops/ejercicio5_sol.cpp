#include <iostream>
#include <string>

using namespace std;

// Function prototype
void imprimir_om_nom(string x);
/**
 * @brief recibe una cadena de caracteres y, en un ciclo for, recorre la cadena caracter por caracter.
  Si encuentra un '1', imprime en pantalla la cadena "Om-nom-nom :P".
Si encuentra un caracter nulo (0), indica que no hay más caracteres en la cadena y termina la función.
 * @Input  -
 * @Output -
 */
int main() {
    string unos;
    getline(cin, unos);
    //call functions here
    imprimir_om_nom(unos);
    return 0;
}

// Function definition
void imprimir_om_nom(string x) {
	string om_nom = "Om-nom-nom :P";
	string no = "No Cake :(";
    for (int i = 0; i < x.size(); i++) {
    	if(x[i]=='1'){
			cout<<om_nom<<endl;
		}
		else if (x[i]== '0'){
			cout<<no<<endl;
			break;
		}
	}
}
