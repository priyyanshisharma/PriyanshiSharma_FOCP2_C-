// Q22generte first n fibonacci numbers using for loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of fibonacci numbers"<<endl;
    cin>>n;

    int first=0, second=1;

    if(n<=0){
        cout<<"enter positive integer"<<endl;

    } else if (n==1){
        cout<<"fibonacci series-"<<first<<endl;
            }
else {
    cout<<"fibonacci series-"<<first<<","<<second<<endl;
    }

    for (int i=3; i<=n; i++){
        int next= first+second;
        cout<<", "<<next<<endl;

        //update
        first=second;
        second=next;


    }
    return 0;
    
}