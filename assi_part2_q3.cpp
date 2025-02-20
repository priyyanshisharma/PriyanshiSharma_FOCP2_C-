// q3  Find Maximum and Minimum
// Input an array of n numbers and find the maximum and minimum elements
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter size: ";
    cin >> n;
    
    int arr[n];
    cout << "enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int maxNum = arr[0], minNum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxNum) maxNum = arr[i];
        if (arr[i] < minNum) minNum = arr[i];
    }
    
    cout << "max: " << maxNum << "\nmin: " << minNum << endl;
    
    return 0;
}
