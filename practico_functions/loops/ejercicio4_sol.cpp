#include <iostream>
#include <string>

using namespace std;

// Function prototype
void imprimir_size(string line);
/**
 * @brief
 * @Input  -
 * @Output -
 */
int main() {
    string line;
    getline(cin, line);
    //call functions here
    imprimir_size(line);
    return 0;
}

// Function definition
void imprimir_size(string line) {
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == ' ') {
            cout << i << " ";
        }
    }
    cout << line.length() << endl;
}
