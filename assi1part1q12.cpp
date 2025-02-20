// Q12 solve quad eq (ax^2+bx+c) using conditional statements to handle all possible cases 
//(real and distict roots, real and equal roots, complex roots).
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c;
    cout<<"enter coefficients a,b,c"<<endl;
    cin>>a>>b>>c;

    //check if linear or not
    if(a==0){
        if(b==0){
            cout<<"not a linear eq"<<endl;
        }
        else  {
            double x=-c/b;
            cout<<"linear equation, single root x="<<x<<endl;
        }  

    }
    else{
        double D=b*b-4*a*c; //discriminant

        if(D>0){ //for real and distinct roots
          double root1=(-b+sqrt(D))/(2*a);
          double root2=(-b-sqrt(D))/(2*a);
          cout<<"real and disticnt roots "<<root1<< " and " <<root2<<endl;

        }
        else if(D==0){ //for real and equal roots
        double root=-b/(2*a);
        cout<<"real and equal roots"<<root<< " and " <<root<<endl;

        }
        else{ //complex roots
            double real_part= -b/(2*a);
            double imag_part= sqrt(-D)/(2*a);
            cout<<"complex roots-"<<real_part<<"+"<<imag_part<<"i and " <<real_part<<"-"<<imag_part<<"i"<<endl;

        }
    }
return 0;

    
}