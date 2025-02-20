// q6 Linear Search (Binary Searching)
// Implement a program to search for a specific number in an array using linear search
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, key;
    cout << "enter size: ";
    cin >> n;
    
    int arr[n];
    cout << "enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "enter number to search: ";
    cin >> key;
    
    int result = linearSearch(arr, n, key);
    if (result != -1) {
        cout << "found at index: " << result << endl;
    } else {
        cout << "not found" << endl;
    }
    
    return 0;
}
 