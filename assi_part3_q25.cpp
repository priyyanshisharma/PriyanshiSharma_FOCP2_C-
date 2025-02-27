// q25 Write a function that takes an array of integers and its size as arguments and returns
//the sum of all elements in the array.
//int sumArray(int arr[], int size);

#include <iostream>

using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
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

    cout << "sum: " << sumArray(arr, size) << endl;
    return 0;
}
