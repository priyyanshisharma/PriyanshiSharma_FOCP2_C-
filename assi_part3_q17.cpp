// q17  Write a function void concatStrings(int count, ...) that takes a variable number of
//string arguments and concatenates them into one single string. The first argument
//count will specify how many strings are passed.
 
#include <iostream>
#include <string>

using namespace std;

void concatStrings(string &result) {} // base case for recursion

template <typename... Args>
void concatStrings(string &result, string first, Args... rest) {
    result += first;
    concatStrings(result, rest...);
}

void concatStrings(int count, ...) {
    string result;
    concatStrings(result);
    cout << "concatenated: " << result << endl;
}

int main() {
    concatStrings(3, "hello, ", "world", "!");
    concatStrings(2, "C++ ", "variadic templates.");
    return 0;
}
 
