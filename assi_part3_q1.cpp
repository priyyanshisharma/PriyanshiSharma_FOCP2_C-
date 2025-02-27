// q1 Write a function int maxNumber(int a, int b) that takes two integers as parameters
// and returns the larger one.
#include <iostream>
using namespace std;

int max_number(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << "max number: " << max_number(x, y);
    return 0;
}
 