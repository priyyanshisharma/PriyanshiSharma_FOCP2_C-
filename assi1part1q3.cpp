// Q3 ask user to input 2 no's and a mathematical operator(+,-,*,/) and display the result of the operation.
//( hint-use switch)
#include<iostream>
using namespace std;
int main(){
    int a,b;
    char opr;
    cout<<"enter 2 no's"<<endl;
    cin>>a>>b;
    cout<<"enter opr(+,-,*,/)"<<endl;
    cin>>opr;
    switch (opr){
        case '+': cout<<a+b<<endl;
        break;
        case '-': cout<<a-b<<endl;
        break;
        case '*': cout<<a*b<<endl;
        break;
        case '/':
        if(b!=0){
            cout<<a/b<<endl;
        } else {
            cout<<"invalid"<<endl;

        }
        break;

        
    }
    return 0;   
    
}