// q8   Create an overloaded print() function:
//a. One takes a string as an argument
//b. Another takes an integer
//c. The third takes both a string and an integer
#include <iostream>
using namespace std;

void print(string s) {
    cout << "string: " << s << endl;
}

void print(int n) {
    cout << "integer: " << n << endl;
}

void print(string s, int n) {
    cout << "string: " << s << ", integer: " << n << endl;
}

int main() {
    print("hello");
    print(42);
    print("age", 25);
    return 0;
}
