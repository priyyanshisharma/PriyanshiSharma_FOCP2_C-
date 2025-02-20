// Q16 determine whether two integers are opposites in sign without using conditional statements(hint- bitwise XOR)
 #include<iostream>
 using namespace std;
 bool haveOppositeSigns(int x, int y){
    return (x^y)<0; //XOR- negative result
 }
    int main(){
        int a,b;
        cout<<"enter 2 integers"<<endl;
        cin>>a>>b;
        if (haveOppositeSigns(a,b)){
    cout<<a<<"and"<<b<<" have opposite signs "<<endl;

}else {
    cout<<a<<"and "<<b<<" have same signs"<<endl;

}
return 0;

 }