// q7 Write a function int gcd(int a, int b) that calculates the greatest common divisor of
// two numbers.
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << "gcd: " << gcd(a, b);
    return 0;
}
