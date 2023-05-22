#include <iostream>
#include <string>
using namespace std;

// Function prototypes Here
string first_letter(string a, string b, string c, string d, string e);
/**
 * @brief Recibe el valor de 2 numeros decimales, los suma y imprime su resultado
 * @Input  -
 * @Output -
 */

int main() {
	string a, b, c, d, e;
	cout<<"tell me five words"<<endl;
	cin>>a>>b>>c>>d>>e;
  // call functions here
  first_letter(a, b, c, d, e);
  cout<<"the first letter of teases words are "<< first_letter(a, b, c, d, e) <<endl;
  return 0;
}

// Function definitions
string first_letter( string a, string b, string c, string d, string e) {
	char a1 = a[0];
	char b1 = b[0];
	char c1 = c[0];
	char d1 = d[0];
	char e1 = e[0];
	string result = string(1,a1)+string(1,b1)+string(1,c1)+string(1,d1)+string(1,e1);
  return result;
}
