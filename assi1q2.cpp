// Q2 ARRAY OPERATION
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int findSecondLargest(int arr[], int size) {
    int largest = arr[0], secondLargest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return (secondLargest == largest) ? -1 : secondLargest;
}

int findSecondSmallest(int arr[], int size) {
    int smallest = arr[0], secondSmallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }
    return (secondSmallest == smallest) ? -1 : secondSmallest;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, size);
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
  
    int secondLargest = findSecondLargest(arr, size);
    int secondSmallest = findSecondSmallest(arr, size);

    if (secondLargest == -1) {
        cout << "No second largest element exists." << endl;
    } else {
        cout << "Second largest element: " << secondLargest << endl;
    }

    if (secondSmallest == -1) {
        cout << "No second smallest element exists." << endl;
    } else {
        cout << "Second smallest element: " << secondSmallest << endl;
    }

    return 0;
}
