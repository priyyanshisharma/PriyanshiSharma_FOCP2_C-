//rotate matrix 90 degree

#include<iostream>
#define N 100
using namespace std;

int main(){
    int n;
    cout<<"enter size of matrix"<<endl;
    cin>>n;

    int matrix [N][N];
    cout<<"enter elements of the matrix"<<endl;
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>matrix[i][j];

        }
    }

    //transpose 
    for (int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    //reverse rows
    for (int i=0;i<n;i++){
        for (int j=0;j<n/2;j++){
            swap(matrix[i][j],matrix[i][n-j-1]);

        }
    }
    cout<<"matrix after rotation"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<"\t";
            

        }
        cout<<endl;
    }
    return 0;
    
}