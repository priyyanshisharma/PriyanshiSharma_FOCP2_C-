//  q30 Write a program that prints all numbers between 1 and 500, skipping numbers divisible by
// both 3 and 7. Stop printing numbers if the sum of printed numbers exceeds 1000.
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 500; i++) {
        if (i % 3 == 0 && i % 7 == 0) {
            continue;
        }
        if (sum + i > 1000) {
            break;
        }
        cout << i << " ";
        sum += i;
    }
    cout << endl;
    return 0;
}
