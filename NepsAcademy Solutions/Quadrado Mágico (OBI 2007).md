# Quadrado Mágico (OBI 2007)

# Solution
```
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));

    int sum_columns, sum_rows, sum_diagonal1, sum_diagonal2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    }

    sum_columns = sum_rows = sum_diagonal1 = sum_diagonal2 = 0;

    for (int i = 0; i < n; i++) {
        sum_rows = sum_columns = 0;
        for (int j = 0; j < n; j++) {
            sum_rows += matrix[i][j];
            sum_columns += matrix[j][i];
        }
        if (i == 0) {
            sum_diagonal1 = sum_diagonal2 = 0;
        }
        sum_diagonal1 += matrix[i][i];
        sum_diagonal2 += matrix[i][n - i - 1];
    }

    if (sum_rows == sum_columns && sum_columns == sum_diagonal1 && sum_diagonal1 == sum_diagonal2) {
        cout << sum_rows << endl;
    } else {
        cout << -1 << endl;
    }
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

```