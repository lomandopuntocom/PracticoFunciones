#include <iostream>
#include <string>
using namespace std;

// Function prototypes Here
string comprobacion(string s1, string s2, string s3, string c);

/**
 * @brief Recibe el valor de 2 numeros enteros no negativos, los suma y los multiplica por la cantidad de digitos que tienen los numeros ingresados por el usuario.
 * @Input  -
 * @Output -
 */

int main(){
    string s1, s2, s3, c;
    cout << "dime el color de las casas y la ultima casa en la que se vio a  Fluffy"<<endl;
    cin >> s1 >> s2 >> s3 >> c;
    cout<<"bucas en "<<comprobacion(s1, s2, s3, c)<<endl;
    return 0;
}

// Function definitions
string comprobacion(string s1, string s2, string s3, string c){
    string respuesta;
    if(c == s1){
        respuesta = "casa 1";
    }
    else if (c == s2){
        respuesta = "casa 2";
    }
    else if (c == s3){
        respuesta = "casa 3";
    }
    else{
        respuesta = "otro lugar";
    }
    return respuesta;
}
