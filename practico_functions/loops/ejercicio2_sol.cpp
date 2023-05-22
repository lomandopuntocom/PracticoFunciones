#include <iostream>
#include <string>
using namespace std;

// Function prototypes Here
int comprobar_suma(int x, int y, int z);
/**
 * @brief recibe tres números enteros x, y y z, y compara si la suma de x e y es igual a z.
  Si es así, devuelve 1, que significa "Correcto", y si no es así, devuelve 0, que significa "Error".
 * @Input  - int
 * @Output - int
 */
int main() {
	string salida;
	int n1, n2, suma;
	cout<<"Dime 2 numeros y el resultado de su suma."<<endl;
	cin>> n1 >> n2 >> suma;
	int respuesta = comprobar_suma(n1,n2,suma);
	if(respuesta == 1){
		salida = "Correcto, ";
	}
	else{
		salida = "Error, ";
	}
	cout<<salida<<"la suma de "<<n1<< " + " <<n2<<" es "<<n1+n2;
	return 0;
}

// Function definitions
int comprobar_suma(int x, int y, int z){
	int respuesta;
	if( x+y == z){
		respuesta = 1;
	}
	else{
		respuesta = 0;
	}
	return respuesta;}
