//Q20 menu drive calculator for +,-,*,/ based on uders choice and repeat menu until user chooses to exit
#include<iostream>
using namespace std;
 int main(){
    int choice;
    double num1, num2, result;

    do{

    cout<<"MENU DRIVEN CALCULATOR"<<endl;
    cout<<"1. addition"<<endl;
    cout<<"2. subtraction"<<endl;
    cout<<"3. multiplication"<<endl;
    cout<<"4. division"<<endl;
    cout<<"5. exit"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
     
    if (choice>=1 && choice <=4){
        cout<<"enter 1st number"<<endl;
        cin>>num1;
        cout<<"enter 2nd number"<<endl;
        cin>>num2;

    }

    switch (choice){
        case 1:
        result=num1+num2;
        cout<<"result-"<<result<<endl;
        break;

        case 2:
        result=num1=num2;
        cout<<"result-"<<result<<endl;
        break;

        case 3:
        result = num1*num2;
        cout<<"result-"<<result<<endl;
        break;

        case 4:
        if (num2!=0){
            result= num1/num2;
         } else { 
            cout<<"invalid"<<endl;
            case 5:
            cout<<"exit"<<endl;
            break;
            default :
            cout<<"enter valid choice "<<endl;

         }      

        }
    }
        while( choice!=5);
        return 0;
      
    }
    
