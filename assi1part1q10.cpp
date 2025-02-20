// Q10 input 2 integers to determine if first is the multiple of second using relational and logical operator
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter both integers"<<endl;
    cin>>a>>b;

    if(b!=0 && a%b==0){
        cout<<a<<" is a multiple of " <<b<<endl;
    }
    else {
        cout<<a<<" is not a multiple of " <<b<<endl;

    }
    return 0;
    
    }