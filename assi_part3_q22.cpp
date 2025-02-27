// q22 Write a recursive function int sumOfNaturalNumbers(int n) that returns the sum of
//the first n natural numbers. For example, sumOfNaturalNumbers(5) should return 1 +
//2 + 3 + 4 + 5 = 15.
#include <iostream>

using namespace std;

int sumOfNaturalNumbers(int n) {
    return (n == 0) ? 0 : n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int n;
    cout << "enter a number: ";
    cin >> n;
    cout << "sum: " << sumOfNaturalNumbers(n) << endl;
    return 0;
}
