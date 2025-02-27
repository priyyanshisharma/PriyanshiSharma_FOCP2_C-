// q23 Write a recursive function int power(int base, int exp) that returns base raised to the
//power of exp. For example, power(2, 3) should return 8.
#include <iostream>

using namespace std;

int power(int base, int exp) {
    return (exp == 0) ? 1 : base * power(base, exp - 1);
}

int main() {
    int base, exp;
    cout << "enter base: ";
    cin >> base;
    cout << "enter exponent: ";
    cin >> exp;
    cout << "result: " << power(base, exp) << endl;
    return 0;
}
