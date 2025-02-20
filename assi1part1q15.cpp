// Q15  evaluate (a^b+c&d) where a,b,c,d are user inputs.explain the precedence of bitwise operator
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"enter 4 integers"<<endl;
    cin>>a>>b>>c>>d;

    int result= a^b+c&d;
    cout<<"result="<<result<<endl;
    return 0;

     } 