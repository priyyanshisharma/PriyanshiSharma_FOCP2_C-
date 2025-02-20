// Q13 stimulate an ATM machine using switch statement. include opt for withdrawl, deposit, balance inquiry , 
//exit with error handling for invalid input and insufficient balance.
#include<iostream>
using namespace std; 
int main(){
    double balance=1000.0 ;
    double amount;
    int choice;

    do{  //menu
    cout<<"---------ATM--------"<<endl;
    cout<<"1. WITHDRAW"<<endl;
    cout<<"2. DEPOSIT"<<endl;
    cout<<"3. BALANCE INQUIRY"<<endl;
    cout<<"4. EXIT"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;

//for invalid input
if(cin.fail()){
    cin.clear();
    cin.ignore(10000, '\n');
    cout<<"invalid input, enter choice between 1 and 4"<<endl;
    continue; //skip to next iteration of loop
}

switch (choice){
    case 1: //withdraw
    cout<<"enter amount to withdraw"<<endl;
    cin>>amount;
    if(amount>balance){
        cout<<"insufficient balance"<<endl;
        }else if( amount <=0){
                cout<<"enter valid amount"<<endl;
                }else{ (amount<balance);
                balance-=amount;
                    cout<<"withdrawal successful, new balance="<<balance<<endl;
                }
                break;

                case 2: //deposit
                cout<<"enter amount to deposit"<<endl;
                cin>>amount;
                if(amount<=0){
                    cout<<"enter valid amount"<<endl;
                }else {  balance+=amount;
                    cout<<"deposit successful, new balance= "<<balance<<endl;
           } break;
                case 3: //balance inquiry
                cout<<"current balance="<<balance<<endl;
                break;

                case 4: //exit
                cout<<"thankyou for using ATM "<<endl;
                break;
                
                default :
                cout<<"invalid choice , plaese enter a number between 1 and 4 "<<endl;



                }
        
     } while (choice!=4);
        return 0;
        
    

}