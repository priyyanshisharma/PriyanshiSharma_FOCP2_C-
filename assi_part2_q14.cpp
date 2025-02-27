// q14 Boundary Elements of a Matrix
//Print all the boundary elements of a matrix.
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;
    int matrix[10][10];

    for (int i = 0; i < rows; i++)  
        for (int j = 0; j < cols; j++)  
            cin >> matrix[i][j];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
                cout << matrix[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
