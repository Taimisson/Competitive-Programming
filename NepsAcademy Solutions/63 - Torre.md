# Torre

# Solução
```
#include <bits/stdc++.h>

using namespace std;

// Time Complextiy: O(n^2)
// Space Complexity: O(n^2)

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    }

    vector<int> coluna_soma(n, 0);
    vector<int> linha_soma(n, 0);

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            linha_soma[i] += matrix[i][j]; // soma da linha i
            coluna_soma[j] += matrix[i][j]; // soma da coluna j
        }
    }

    int max_sum = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            int sum = linha_soma[i] + coluna_soma[j] - 2 * matrix[i][j]; // o -2 é porque a soma da linha e da coluna
            // contam a posição (i, j) duas vezes e o * é porque a posição (i, j) foi subtraída duas vezes
            max_sum = max(max_sum, sum);
        }
    }

    cout << max_sum << endl;

    return 0;
}


auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```