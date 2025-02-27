//  q14 Create an overloaded function power()
//a. One version takes two int (base and exponent).
//b. Another takes one double and one int.
#include <iostream>
#include <cmath>

using namespace std;

// power with int base and int exponent
int power(int base, int exp) { return pow(base, exp); }

// power with double base and int exponent
double power(double base, int exp) { return pow(base, exp); }

int main() {
    cout << "int power: " << power(2, 3) << endl;     // 2^3 = 8
    cout << "double power: " << power(2.5, 3) << endl; // 2.5^3 = 15.625
    return 0;
}
