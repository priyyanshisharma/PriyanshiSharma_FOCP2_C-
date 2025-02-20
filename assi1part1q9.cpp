//Q9  WAP to take 3 inputs- char, int, floating- point number & display in formatted table
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    char ch;
    int num;
    float fnum;

    cout<<"enter a character"<<endl;
    cin>>ch;
    cout<<"enter an integer"<<endl;
    cin>>num;
    cout<<"enter a floating point"<<endl;
    cin>>fnum;

    cout<<"\n---------------------------\n";
    cout<<"| character | integer | float |";
    cout<<"\n---------------------------\n";
    cout<<"|"<<setw(10)<<ch<<"|"
    <<setw(7)<<num<<"|"
    <<setw(7)<<fixed<< setprecision(2)<<fnum<<"|";
    cout<<"\n----------------------------\n";

    return 0;
    
}