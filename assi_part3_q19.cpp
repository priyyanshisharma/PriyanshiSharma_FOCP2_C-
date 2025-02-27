// q19 Write a function int factorial(int n) that takes a number as input and returns its
//factorial.
#include <iostream>

using namespace std;

int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {
    cout << "factorial: " << factorial(5) << endl; // 5! = 120
    cout << "factorial: " << factorial(7) << endl; // 7! = 5040
    return 0;
}
