// q26 Write a function that takes an array and its size as arguments and returns the
//maximum element.
//int findMax(int arr[], int size);
#include <iostream>

using namespace std;

int findMax(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
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

    cout << "maximum: " << findMax(arr, size) << endl;
    return 0;
}
 