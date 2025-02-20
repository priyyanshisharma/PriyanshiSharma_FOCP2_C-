// Q11 count no of 1 bits in an integer input by the user
#include <iostream>
using namespace std;
int countOnes(int n) {
    int count = 0;
    while(n){ 
        count += (n & 1);  
        n >>= 1; 
    }
    return count;
}

int main() {
    int num;
    cout<< "enter an integer:";
    cin >> num;
    int ones=countOnes(num);
    cout<< "number of 1 bits in" <<num<<"is: " << ones << endl;

    return 0;
}
