#include <iostream>

using namespace std;

// Function prototypes Here
string comprobar(string x, string y, string z, string w);
/**
 * @brief
 * @Input  -
 * @Output -
 */
int get_user_input();

int main() {
	cout<<"Dime el color de las casas y la ultima casa donde se vio a Fluffy."<<endl;
	string c1, c2, c3, color;
	cin>>c1>>c2>>c3>>color;
  // call functions here
	string r =comprobar(c1, c2, c3, color);
	cout<<"Buscas a Fluffy en "<<r<<endl;
	return 0;
}

// Function definitions
string comprobar(string x, string y, string z, string w) {
  string respuesta; 
  if (w==x){
  	respuesta = "la casa 1";
  }
  else if (w==y){
  	respuesta = "la casa 2";
  }
  else if (w==z){
  	respuesta = "la casa 3";
  }
  else{
  	respuesta = "otro lugar";
  }
  return respuesta;
}
