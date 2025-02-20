//26 WAP to generate and display the first  n prime numbers using for and while loop
#include<iostream>
using namespace std;

bool isPrime(int num){
if (num<2)
return false;
for(int i=2;i*i<=num;i++){
    if(num%i==0)
    return false;
}
return true;
}

int main(){
    int n, count=0, num=2;
    cout<<"enter no of prime numbers to display"<<endl;
    cin>>n;

    while (count<n){
        if (isPrime(num)){
            cout<< num << " " ;
            count++;

        }
        num++;
    }
    return 0;
    
}

