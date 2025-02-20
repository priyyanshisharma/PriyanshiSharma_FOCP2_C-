// Q5 WAP that calculates compount interest for a given principal amount, rate of interest, time period using 
//constants and user input for variables
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    float principal, rate, time;
    const float BASE=1.0;
    cout<<"enter principal amount:"<<endl;
    cin>>principal;
    cout<<"enter rate of interest :"<<endl;
    cin>>rate;
    cout<<"enter time period in years :"<<endl;
    cin>>time;

//calculation 
float amount=principal* pow((BASE+rate/100),time);
float compound_interest=amount-principal;

//for 2 decimal places
cout<<fixed<<setprecision(2);
cout<<"final amount"<<amount<<endl;
cout<<"compound interest"<<compound_interest<<endl;
return 0;

    }