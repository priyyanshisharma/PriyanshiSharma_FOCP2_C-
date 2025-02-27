// q9 Write a C++ program with a class Calculator that overloads a sum() function to add:
//a. Two integers
//b. Three doubles
//c. One integer and one float
#include <iostream>
using namespace std;

class calculator {
public:
    int sum(int a, int b) {
        return a + b;
    }

    double sum(double a, double b, double c) {
        return a + b + c;
    }

    float sum(int a, float b) {
        return a + b;
    }
};

int main() {
    calculator calc;
    cout << "sum of two integers: " << calc.sum(3, 5) << endl;
    cout << "sum of three doubles: " << calc.sum(2.5, 3.5, 4.0) << endl;
    cout << "sum of integer and float: " << calc.sum(7, 2.3f) << endl;
    return 0;
}
