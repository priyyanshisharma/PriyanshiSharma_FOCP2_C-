// q16 Write a function int findLargest(int count, ...) that takes a variable number of integer
//arguments and returns the largest number among them. The first argument count will
//specify how many numbers are passed.
#include <iostream>

using namespace std;

int findLargest(int largest) { 
    return largest; 
}

template <typename... Args>
int findLargest(int first, Args... rest) {
    return max(first, findLargest(rest...));
}

int main() {
    cout << "largest: " << findLargest(10, 20, 5, 30, 15) << endl; // 30
    cout << "largest: " << findLargest(7, 3, 9, 2, 8) << endl; // 9
    return 0;
}
