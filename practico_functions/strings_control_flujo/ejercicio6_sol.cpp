#include <iostream>
using namespace std;

// Function prototypes
float calculate_discount_price(float N, float A, float B, float X, float Y);
/**
 * @brief Calcula el precio de compra de un teléfono inteligente con descuento flexible.
 * @Input -
 * @Output - 
 */
int main() {
    float N, A, B, X, Y;
    cin >> N >> A >> B >> X >> Y;
    float discounted_price = calculate_discount_price(N, A, B, X, Y);
    cout << discounted_price << endl;
    return 0;
}
//Function definition
float calculate_discount_price(float N, float A, float B, float X, float Y) {
    if (N <= A) {
        return N;
    } else if (N <= B) {
        return N * (1 - X / 100);
    } else {
        return N * (1 - Y / 100);
    }
}
