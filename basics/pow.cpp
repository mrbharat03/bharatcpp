#include <iostream>
#include <cmath> // For the pow() function
using namespace std;

int main() {
    double a, b, result;

    // Input the base and the exponent
    cout << "Enter the base (a): ";
    cin >> a;

    cout << "Enter the exponent (-b): ";
    cin >> b;

    // Check if the base is zero and the exponent is negative
    if (a == 0) {
        cout << "Error: Base cannot be zero when the exponent is negative." << endl;
        return 1; // Exit the program with an error code
    }

    // Calculate a^-b using pow()
    result = pow(a, -b);

    // Output the result
    cout << a << " raised to the power of " << -b << " is: " << result << endl;

    return 0;
}
