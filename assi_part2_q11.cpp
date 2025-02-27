// q11 Diagonal Sum of a Matrix
// Calculate the sum of elements on the primary and secondary diagonals of a square
//matrix.
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    int matrix[10][10];

    for (int i = 0; i < n; i++)  
        for (int j = 0; j < n; j++)  
            cin >> matrix[i][j];

    for (int i = 0; i < n; i++) {
        sum += matrix[i][i] + matrix[i][n - i - 1];
    }

    if (n % 2 != 0) sum -= matrix[n / 2][n / 2];  

    cout << sum;
    return 0;
}
