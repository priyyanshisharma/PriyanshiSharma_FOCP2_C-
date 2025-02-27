// q12 Write a program to find the row in a 2D matrix that has the maximum sum of its
//elements.
#include <iostream>
using namespace std;

int main() {
    int rows, cols, maxSum = 0, maxRow = 0;
    cin >> rows >> cols;
    int matrix[10][10];

    for (int i = 0; i < rows; i++)  
        for (int j = 0, sum = 0; j < cols; j++) {
            cin >> matrix[i][j];
            sum += matrix[i][j];
            if (j == cols - 1 && sum > maxSum) maxSum = sum, maxRow = i;
        }

    cout << "Row with max sum: " << maxRow;
    return 0;
}
