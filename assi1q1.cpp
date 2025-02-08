// Q1 NUMBER MANIPULATION AND PRIME NUMBERS
#include<iostream>
using namespace std;

int main() {
    int n, i;
    bool isPrime = true;

    cout << "enter any number";
    cin >> n;

    // check prime or not
    if (n < 2) {
        isPrime = false;
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << n << " is a prime number" << endl;

        // next prime number
        int next = n + 1;
        while (true) {
            bool nextIsPrime = true;

            for (i = 2; i < next; i++) {
                if (next % i == 0) {
                    nextIsPrime = false;
                    break;
                }
            }

            if (nextIsPrime) {
                cout << "next prime is=" << next << endl;
                break;
            }
            next++;
        }
    } else {
        cout << n << " is not a prime number" << endl;

        // factors
        cout << "factors of n=" << n << endl;
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                cout << i << endl;
            }
        }
    }

    return 0;
}

