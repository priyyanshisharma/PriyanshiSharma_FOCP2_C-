//Q18 perform circular left and riht shift of bits on a given integer and displays the result.
#include<iostream>
using namespace std;

int circularLeftShift(int num, int shift, int bitSize){
    return (num << shift) | (num >> (bitSize- shift));
}

int circularRightShift(int num, int shift, int bitSize){
    return (num>> shift) | (num<< (bitSize- shift));
}

int main(){
    int num, shift, bitSize=8;
    cout<<"enter the integer"<<endl;
    cin>>num;
    cout<<"enter no of positions to shift"<<endl;
    cin>>shift;

     
    int mask = (1 << bitSize) - 1; 
    num &= mask;  // ensure input is within bitSize bits

    // Perform circular shifts and apply masking
    int leftShiftResult = circularLeftShift(num, shift, bitSize) & mask;
    int rightShiftResult = circularRightShift(num, shift, bitSize) & mask;

    cout << "circular left shift result: " << leftShiftResult << endl;
    cout << "circular right shift result: " << rightShiftResult << endl;






return 0;
}