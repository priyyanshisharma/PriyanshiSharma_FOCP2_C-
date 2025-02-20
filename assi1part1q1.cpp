    // Q1 create a program that reads users name, age then outputs "Hello"[name] you are [age] years old!
    #include<iostream>
    using namespace std;
    int main(){
        int age;
        string name;
        cout<<"enter name:"<<endl;
        cin>>name;
        cout<<"enter age:"<<endl;
        cin>>age;
        cout<<"hello "<<name<<", you are "<<age<<" years old!"<<endl;
        return 0;
    }