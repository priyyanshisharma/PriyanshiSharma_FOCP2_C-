//  q13 Overload a function concat()
//a. One version takes two strings and returns their concatenation.
//b. Another takes an int and a string, converting the int to a string before
//concatenation.
#include <iostream>
#include <string>

using namespace std;

string concat(string a, string b) { return a + b; }
string concat(int num, string str) { return to_string(num) + str; }

int main() {
    cout << concat("hello, ", "world!") << endl;
    cout << concat(42, " is the answer.") << endl;
    return 0;
}
