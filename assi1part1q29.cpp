//  Q29 Create a program to find the first number greater than 50 that is divisible by 7.
#include <iostream>
using namespace std;

int main() {
    int number = 51;
    while (number % 7 != 0) {
        number++;
    }
    
    cout << "the first number greater than 50 that is divisible by 7 is: " << number << endl;
    return 0;
}
