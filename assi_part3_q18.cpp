// q18 Write a function int gcd(int a, int b) that calculates the greatest common divisor of
//two numbers using recursion.
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    cout << "gcd: " << gcd(48, 18) << endl; // 6
    cout << "gcd: " << gcd(56, 98) << endl; // 14
    return 0;
}
