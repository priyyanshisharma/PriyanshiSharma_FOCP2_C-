//calculate grade of a student using if else/ switch statements
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter students's marks"<<endl;
    cin>>marks;

    char grade;
    
     if (marks>=90) {
        cout<<"A grade"<<endl;
       } else if (marks>=80){
        cout<<"B grade"<<endl;

       } else if (marks>=70){
        cout<<"C grade"<<endl;

       } else if (marks>=60){
        cout<<"D grade"<<endl;

       } else {
        cout<<"fail"<<endl;

       }
       return 0;

    }