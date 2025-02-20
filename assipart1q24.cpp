// Q24 factorial using do while loop
#include<iostream>
using namespace std;
int main(){
    int num, factorial=1, i=1;

    cout<<"enter a positive integer"<<endl;
    cin>>num;

    if (num<0){
        cout<<"invalid"<<endl;

       } else{

         do{
            factorial*=i;
            i++;
         }
 while ( i<=num); 

 
        
        cout<<"factorial of number"<<num<<"is"<<factorial<<endl;

    
}
return 0;
}