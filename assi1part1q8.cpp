// Q8 WAP that take user's full name and age as input and displys a greeting with name and number of days 
//they have lived.
#include<iostream>
using namespace std;
int main(){
    int age, days_lived;
    string name;
    
    // input from user-
    cout<<"enter name:"<<endl;
    cin>>name;
    cout<<"enter age:"<<endl;
    cin>>age;
    
    //to calculate the number of days he/she lived-
    days_lived=age*365;

    cout<<"hello, your name is: "<<name<<endl;
    cout<<"number of days lived:"<<days_lived<<endl;
    return 0;
    
}