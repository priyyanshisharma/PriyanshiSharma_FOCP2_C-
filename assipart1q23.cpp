// Q23 number is prime using while loop
#include<iostream>
using namespace std;
int main(){
    int num, i=2;
    bool isPrime=true;

    cout<<"enter a number"<<endl;
    cin>>num;

    if (num<=1){
        isPrime=false;


    }else {
        while (i <num){
            if (num%i==0){
                isPrime =false;
                break;

            }
            i++;
        }

    }
    if(isPrime){
        cout<<num<<"is a prime no"<<endl;
        
    }else {
        cout<<num<<"is not a prime no"<<endl;

    }

return 0;

}