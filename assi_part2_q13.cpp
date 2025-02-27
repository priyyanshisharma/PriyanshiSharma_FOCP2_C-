// q13 Search in a Sorted Matrix:
// Write a program to search for a target value in a row-wise and column-wise sorted
//matrix
#include <iostream>
using namespace std;

int main() {
    int rows, cols, target;
    cin >> rows >> cols >> target;
    int matrix[10][10];

    for (int i = 0; i < rows; i++)  
        for (int j = 0; j < cols; j++)  
            cin >> matrix[i][j];

    int i = 0, j = cols - 1;
    while (i < rows && j >= 0) {
        if (matrix[i][j] == target) {
            cout << "Found at (" << i << ", " << j << ")";
            return 0;
        }
        matrix[i][j] > target ? j-- : i++;
    }

    cout << "Not found";
    return 0;
}
