// q5 Write a function bool isPalindrome(int n) that checks if the given number is a
//palindrome.
#include <iostream>
using namespace std;

bool is_palindrome(int n) {
    int original = n, rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return original == rev;
}

int main() {
    int n;
    cin >> n;
    cout << (is_palindrome(n) ? "palindrome" : "not palindrome");
    return 0;
}
