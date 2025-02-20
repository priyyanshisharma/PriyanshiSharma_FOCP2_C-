// Q6 WAP that calculates the area and perimeter of a rectangle using user provided length and bredth. Use
// constants where necesssary
#include<iostream>
using namespace std;
int main(){
    float l,b,a,p;
    cout<<"enter length of rect:"<<endl;
    cin>>l;
    cout<<"enter bredth of rect:"<<endl;
    cin>>b;

    //calculation
    a=l*b;
    p=2*(l+b);
    cout<<"area:"<<a<<endl;
    cout<<"perimeter:"<<p<<endl;

    return 0;
    
}
