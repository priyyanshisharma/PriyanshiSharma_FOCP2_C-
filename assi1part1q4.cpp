// Q4 take two floatinfgpoint numbers as input and display their division result with two decimal places
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a,b;
    cin>>a>>b;
    float c=a/b;
    if(b==0){
        cout<<"error"<<endl;
    }else {
    cout<<fixed<<setprecision(2)<<c<<endl;
    }
    return 0;

}