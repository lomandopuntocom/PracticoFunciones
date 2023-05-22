#include <iostream>

using namespace std;

// Function prototypes Here

/**
 * @brief Recibe el valor de 2 numeros decimales, los suma y imprime su resultado
 * @Input  -
 * @Output -
 */
double sum_double(double x, double y);

int main() {
	double n, m;
	cout << "Enter a value for \"n\" and \"m\""<<endl;
	cin>>n;
	cin>>m;
  // call functions here
  double a = sum_double(n, m);
  cout<<"the value of the sum is "<<a;
  return 0;
}

// Function definitions
double sum_double(double x, double y) {
  double h = x + y;
  return h;
}
