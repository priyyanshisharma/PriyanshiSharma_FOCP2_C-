// q20 Write a function int fibonacci(int n) that returns the nth Fibonacci number using
//recursion.

#include <iostream>

using namespace std;

int fibonacci(int n) {
    return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    cout << "fibonacci: " << fibonacci(5) << endl; // 5th Fibonacci number = 5
    cout << "fibonacci: " << fibonacci(7) << endl; // 7th Fibonacci number = 13
    return 0;
}
