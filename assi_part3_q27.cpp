// q27 . Implement a function that takes an array and its size as arguments and returns the
//second largest element using a reference parameter.
//int findSecondLargest(int arr[], int size);
#include <iostream>

using namespace std;

bool findSecondLargest(int arr[], int size, int &secondLargest) {
    if (size < 2) return false; // Not enough elements

    int largest = arr[0], secLargest = INT_MIN;
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secLargest && arr[i] != largest) {
            secLargest = arr[i];
        }
    }

    if (secLargest == INT_MIN) return false; // No second largest found
    secondLargest = secLargest;
    return true;
}

int main() {
    int size;
    cout << "enter array size: ";
    cin >> size;

    int arr[size];
    cout << "enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int secondLargest;
    if (findSecondLargest(arr, size, secondLargest)) {
        cout << "second largest: " << secondLargest << endl;
    } else {
        cout << "no second largest element found" << endl;
    }

    return 0;
}
