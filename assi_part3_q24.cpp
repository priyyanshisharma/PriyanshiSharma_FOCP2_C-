// q24 Write a function void swapNumbers(int &a, int &b) that swaps two numbers using
//pass-by-reference.
#include <iostream>

using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout << "enter first number: ";
    cin >> x;
    cout << "enter second number: ";
    cin >> y;

    swapNumbers(x, y);

    cout << "after swapping: " << x << " " << y << endl;
    return 0;
}
