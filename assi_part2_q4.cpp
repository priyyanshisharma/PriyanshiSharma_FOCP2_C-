 // q4 Sum and Average of Array Elements
// Calculate the sum and average of n numbers stored in an array.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter size: ";
    cin >> n;
    
    int arr[n], sum = 0;
    cout << "enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    float avg = (float)sum / n;
    
    cout << "sum: " << sum << "\navg: " << avg << endl;
    
    return 0;
}
