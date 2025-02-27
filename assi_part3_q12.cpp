// q12 Overload a function area()
//a. One version calculates the area of a square (takes one int).
//b. Another calculates the area of a rectangle (takes two ints).
//c. Another calculates the area of a circle (takes a double radius).

#include <iostream>

using namespace std;

// area of a square
int area(int side) { return side * side; }

// area of a rectangle
int area(int length, int width) { return length * width; }

// area of a circle
double area(double radius) { return 3.14159 * radius * radius; }

int main() {
    cout << "square: " << area(5) << endl;
    cout << "rectangle: " << area(4, 6) << endl;
    cout << "circle: " << area(3.5) << endl;
    return 0;
}
