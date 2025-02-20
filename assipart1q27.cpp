 //find armstong number within a given range using nested loops 
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int low, high;
    cout<<"enter lower limit"<<endl;
    cin>>low;
    cout<<"enter uppper limit"<<endl;
    cin>>high;
    cout<<"armstrong numbers between"<<low<< " and " <<high<< " are " <<endl;

    for(int num=low; num<=high; num++){
        int sum=0, temp=num, digits=0;
         //count digits
        while(temp>0){
            temp/=10;
            digits++;
        }
        temp=num;
         //find sum
        while(temp>0){
            int digit= temp%10;
            sum+=pow(digit, digits);
            temp/=10;
        }
        //check
        if(sum==num){
            cout<<num<< " " ;
        }
    }
        cout<<endl;
          return 0;
        }
 