// q3  Write a function int reverseNumber(int n) that returns the reversed version of a given
//number.
#include <iostream>
using namespace std;

int reverse_number(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int n;
    cin >> n;
    cout << "reversed number: " << reverse_number(n);
    return 0;
}
