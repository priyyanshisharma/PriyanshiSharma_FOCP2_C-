// q30 Write a function that modifies all elements of an array by multiplying them by 2 using
//pass-by-reference.
//void doubleArray(int (&arr)[6]);

#include <iostream>

using namespace std;

void doubleArray(int (&arr)[6]) {
    for (int i = 0; i < 6; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int arr[6];

    cout << "enter 6 elements: ";
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    doubleArray(arr);

    cout << "modified array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
