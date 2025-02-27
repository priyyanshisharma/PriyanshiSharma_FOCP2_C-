// q21 Write a recursive function string reverseString(string str) that returns the reverse of a
//given string. For example, reverseString("hello") should return "olleh".

#include <iostream>

using namespace std;

string reverseString(string str) {
    return (str.length() <= 1) ? str : reverseString(str.substr(1)) + str[0];
}

int main() {
    cout << "reversed: " << reverseString("hello") << endl; // "olleh"
    cout << "reversed: " << reverseString("world") << endl; // "dlrow"
    return 0;
}
