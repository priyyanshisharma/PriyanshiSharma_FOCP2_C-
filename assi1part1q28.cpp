#include <iostream>
using namespace std;

int main() {
    int secretNumber = 42; 
    int guess, attempts = 5;
    
    cout << "guess the number between 1 and 100. You have " << attempts << " attempts." << endl;
    
    while (attempts > 0) {
        cout << "Enter your guess: ";
        cin >> guess;
        
        if (guess == secretNumber) {
            cout << "Congratulations. You guessed the number correctly." << endl;
            return 0;
        } else if (guess < secretNumber) {
            cout << "Too low!, Try again." << endl;
        } else {
            cout << "Too high, Try again." << endl;
        }
        
        attempts--;
        cout << "Attempts remaining: " << attempts << endl;
    }
    
    cout << "you've run out of attempts. The number was " << secretNumber << "." << endl;
    return 0;
}
