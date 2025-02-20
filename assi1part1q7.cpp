// Q7 swap 2 numbers with and without a temporary variable
#include<iostream>
using namespace std;
int main(){

int a,b,temp;
cout<<"enter 2 no's"<<endl;
cin>>a>>b;

//swapping using a variable
temp=a;
a=b;
b=temp;

cout<<" after swapping a= "<<a<<" after swapping b= "<<b<<endl;

//swapping without a variable
a= a + b;
    b = a - b;
    a = a - b;
    
    cout << "After swapping (without temp variable), a = " << a << ", b = " << b << endl;
    

return 0;
}
