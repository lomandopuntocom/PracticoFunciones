#include <iostream>

using namespace std;

// Function prototypes Here

/**
 * @brief
 * @Input  -
 * @Output -
 */
int get_user_input();

int main() {
  // call functions here
  int a = get_user_input();
  cout<<a;
  return 0;
}

// Function definitions
int get_user_input() {
  int n,m;
  cout << "Enter a value for n: ";
  cin >> n;
  cout << "Enter a value for m: ";
  cin >> m;
  cout<<"the value of the sum is ";
  int o = n + m;
  return o;
}
