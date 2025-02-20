// q35 .Write a program to calculate the Least Common Multiple (LCM) and Greatest Common
//Divisor (GCD) of two integers.
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

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int num1, num2;
    cout << "enter two numbers: ";
    cin >> num1 >> num2;
    
    cout << "gcd: " << gcd(num1, num2) << endl;
    cout << "lcm: " << lcm(num1, num2) << endl;
    
    return 0;
}
 