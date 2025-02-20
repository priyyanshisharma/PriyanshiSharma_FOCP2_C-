//Q21 check whether a year is a leap year or not using nested if else statements.
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter year"<<endl;
    cin>>year;

    if(year %4==0){
        if (year %100==0){
            if (year%400==0){
                cout<<"leap year"<<endl;

            } else {
                cout<<"not a leap year"<<endl;

            }
        }
            else{
                cout<<"is a leap year"<<endl;

            }


        
    }
    else {
        cout<<"is not a leap year"<<endl;

    }
    return 0;

    
}
