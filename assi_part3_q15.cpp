// q15 Write a function int sum(int count, ...) that takes a variable number of integer
//arguments and returns their sum. The first argument count will specify how many
//numbers are passed.

#include <iostream>

using namespace std;

int sum() { return 0; } // base case for recursion

template <typename... Args>
int sum(int first, Args... rest) {
    return first + sum(rest...);
}

int main() {
    cout << "sum: " << sum(10, 20, 30) << endl; // 10 + 20 + 30 = 60
    cout << "sum: " << sum(1, 2, 3, 4, 5) << endl; // 1 + 2 + 3 + 4 + 5 = 15
    return 0;
}
