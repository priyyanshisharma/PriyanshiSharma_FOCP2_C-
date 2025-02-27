// q2 Write a function int factorial(int n) that takes a number as input and returns its
//factorial.
#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++)  
        fact *= i;
    return fact;
}

int main() {
    int n;
    cin >> n;
    cout << "factorial: " << factorial(n);
    return 0;
}
