// q10 Matrix Multiplication
// Multiply two matrices of appropriate dimensions
#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    if (c1 != r2) return 0;

    int a[10][10], b[10][10], res[10][10] = {0};
    for (int i = 0; i < r1; i++)  
        for (int j = 0; j < c1; j++) cin >> a[i][j];

    for (int i = 0; i < r2; i++)  
        for (int j = 0; j < c2; j++) cin >> b[i][j];

    for (int i = 0; i < r1; i++)  
        for (int j = 0; j < c2; j++)  
            for (int k = 0; k < c1; k++) res[i][j] += a[i][k] * b[k][j];

    for (int i = 0; i < r1; i++, cout << endl)  
        for (int j = 0; j < c2; j++) cout << res[i][j] << " ";

    return 0;
}
