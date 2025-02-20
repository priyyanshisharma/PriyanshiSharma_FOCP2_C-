// q2 Array Reverse
// Input an array of n elements and display it in reverse order
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
    
    cout << "reversed array: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
