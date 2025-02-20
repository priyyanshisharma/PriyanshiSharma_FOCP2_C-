//  Q25  accept user input of integers until the user types -  exit 
//at  the end display-
// -sum of all entered numbers
//- count of valid integers entered 
//-max and min numbers

#include <iostream>
#include <climits> 
using namespace std;

int main() {
    int num, sum = 0, count = 0;
    int maxNum = INT_MIN,minNum = INT_MAX; 
    cout << "enter integers (type -1 to exit):" << endl;  

    do {
        cin >> num;

  if(num== -1) break; 

        sum += num;   
        count++;     
        if(num > maxNum) maxNum = num;
        if(num < minNum) minNum = num; 
} while (true);

    // results
    if (count > 0) {
        cout << "sum of all numbers: "<< sum << endl;
        cout << "count of valid numbers entered: " <<count << endl;
        cout << "maximum number: "<< maxNum << endl;
        cout << "minimum number: "<< minNum << endl;
    } else {
        cout << "invalid" <<endl;
    }

    return 0;
}
