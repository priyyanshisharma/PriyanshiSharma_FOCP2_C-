#include<iostream>
using namespace std;

void printSpiral (int n){
    int spiral[n][n];
    int value=1;
    int top=0, bottom=n-1, right= n-1, left=0;

    while(value <= n*n){

        // top row
        for( int i=left; i<=right;i++)
        spiral[top][i]=value++;
        top++;

        //right column
        for (int i=top;i<=bottom; i++ )
        spiral [i][right]=value++;
        right--;

        //bottom row
        if(top<=bottom){
        for(int i=right; i>=left;i--)
        spiral [bottom][i]=value++;
        bottom--;
        }
        //left column
        if(left<=right){
        for(int i=bottom; i>=top;i--)
        spiral [i][left]=value++;
        left++;
        }

     
    }
    //print spiral
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
        cout<<spiral[i][j]<<"\t";
        cout<<endl;
        


    }  
        
    }
    //input
    int main(){
        int n;

        cout<<"enter size of spiral"<<endl;
    
        
        cin>>n;
        printSpiral(n);
    
    return 0;
    
}
