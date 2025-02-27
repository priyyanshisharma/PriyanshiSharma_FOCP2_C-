// q15 Find Saddle Point
//A saddle point is an element of the matrix that is the smallest in its row but the largest
// in its column. Write a program to find the saddle point.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[10][10];

    for (int i = 0; i < n; i++)  
        for (int j = 0; j < n; j++)  
            cin >> matrix[i][j];

    for (int i = 0; i < n; i++) {
        int min_row = matrix[i][0], col_index = 0;
        for (int j = 1; j < n; j++)  
            if (matrix[i][j] < min_row) min_row = matrix[i][j], col_index = j;

        bool is_saddle = true;
        for (int k = 0; k < n; k++)  
            if (matrix[k][col_index] > min_row) is_saddle = false;

        if (is_saddle) {
            cout << "saddle point: " << min_row;
            return 0;
        }
    }

    cout << "no saddle point";
    return 0;
}
