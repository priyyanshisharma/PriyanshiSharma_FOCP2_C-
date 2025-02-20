// q7 Remove Duplicates
// Input an array of n numbers and remove all duplicate elements.
#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) return n;
    
    int temp[n], j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[n - 1];
    
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }
    
    return j;
}

int main() {
    int n;
    cout << "enter size: ";
    cin >> n;
    
    int arr[n];
    cout << "enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    n = removeDuplicates(arr, n);
    
    cout << "array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
