// q28 Implement a function that generates an array of n Fibonacci numbers and returns it
//using dynamic memory allocation.
//int* generateFibonacci(int n);
#include <iostream>

using namespace std;

int* generateFibonacci(int n) {
    if (n <= 0) return nullptr; // Handle invalid input

    int* fib = new int[n]; // Allocate memory dynamically

    fib[0] = 0;
    if (n > 1) fib[1] = 1;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib;
}

int main() {
    int n;
    cout << "enter number of fibonacci terms: ";
    cin >> n;

    int* fibSeries = generateFibonacci(n);

    if (fibSeries) {
        cout << "fibonacci series: ";
        for (int i = 0; i < n; i++) {
            cout << fibSeries[i] << " ";
        }
        cout << endl;

        delete[] fibSeries; // Free allocated memory
    } else {
        cout << "invalid input" << endl;
    }

    return 0;
}
