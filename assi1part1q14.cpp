// Q14 if a triangle is valid based on its dimensions and its types (scalene, equilateral, isosceles)using if else
#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"enter the sides of triangle "<<endl;
    cin>>a>>b>>c;

    if (a+b>c && b+c>a && a+c>b){

    if(a==b && b==c){
        cout<<"equilateral"<<endl;

    }
    else if(a==b || b==c || a==c){
        cout<<"isosceles"<<endl;
        
    }
    else{
        cout<<"scalene"<<endl;

    }
    }
    else {
        cout<<"invalid triangle"<<endl;

    }
    return 0;
    
}
