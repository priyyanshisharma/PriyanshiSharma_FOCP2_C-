// q11 Create an overloaded function greet()
//a. One version takes no parameters and prints "Hello!".
//b. Another takes a string name and prints "Hello, [name]!".
//c. Another takes a string name and an int age, printing "Hello, [name]! You are
//[age] years old.".
#include <iostream>
using namespace std;

void greet() {
    cout << "hello!" << endl;
}

void greet(string name) {
    cout << "hello, " << name << "!" << endl;
}

void greet(string name, int age) {
    cout << "hello, " << name << "! you are " << age << " years old." << endl;
}

int main() {
    greet();
    greet("alice");
    greet("bob", 25);
    return 0;
}
