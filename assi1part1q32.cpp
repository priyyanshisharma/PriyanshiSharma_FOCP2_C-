// q32 Write a program that takes an integer array from the user and finds the second largest
// element. 
#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int largest = INT_MIN, secondLargest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    if (secondLargest == INT_MIN) {
        cout << "no second largest element found." << endl;
    } else {
        cout << "the second largest element is: " << secondLargest << endl;
    }
    
    return 0;
}
