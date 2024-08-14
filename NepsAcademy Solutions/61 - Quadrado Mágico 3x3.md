# Quadrado Mágico 3x3

# Solução
```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int matrix[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cin >> matrix[i][j];
    }

    // quadrado magico
    int col1 = matrix[0][0] + matrix[1][0] + matrix[2][0];
    int col2 = matrix[0][1] + matrix[1][1] + matrix[2][1];
    int col3 = matrix[0][2] + matrix[1][2] + matrix[2][2];

    int row1 = matrix[0][0] + matrix[0][1] + matrix[0][2];
    int row2 = matrix[1][0] + matrix[1][1] + matrix[1][2];
    int row3 = matrix[2][0] + matrix[2][1] + matrix[2][2];

    int diag1 = matrix[0][0] + matrix[1][1] + matrix[2][2];
    int diag2 = matrix[0][2] + matrix[1][1] + matrix[2][0];

    if (col1 == col2 && col2 == col3 && col3 == row1 && row1 == row2 && row2 == row3 && row3 == diag1 && diag1 == diag2)
        cout << "SIM" << endl;
    else
        cout << "NAO" << endl;

    return 0;
}


auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```