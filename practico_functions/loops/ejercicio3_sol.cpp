#include <iostream>
#include <string>
using namespace std;

// Function prototypes Here
int comprobar_diferencia(int x, int y);
/**
 * @brief 
 * @Input  - int
 * @Output - int
 */
 int main(){
 	int m1, m2;
 	cout<<"Dime las mitades de la naranja";
 	cin>>m1>>m2;
 	int confirmacion = comprobar_diferencia(m1, m2);
		if (confirmacion == 1) {
    		int dif = m1 - m2;
    		cout << "Cortar " << dif << " de la primera.";
} 		else if (confirmacion == 2) {
    		int dif = m2 - m1;
    		cout << "Cortar " << dif << " de la segunda.";
} 		else if (confirmacion == 0) {
    		cout << "Ambas partes son iguales";
}
 }
// Function definitions
int comprobar_diferencia(int x, int y) {
    int confirmacion;
    if (x > y) {
        confirmacion = 1;
    } else if (y > x) {
        confirmacion = 2;
    } else {
        confirmacion = 0;
    }
    return confirmacion;}