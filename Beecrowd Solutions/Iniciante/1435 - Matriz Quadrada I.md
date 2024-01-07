# 1435 - Matriz Quadrada I

Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), correspondente a ordem de uma matriz M de inteiros, e construa a matriz de acordo com o exemplo abaixo.

[Matriz Quadrada I - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1435)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

void printMatrix(int n) {
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            int cellValue = min(min(i, j), min(n - 1 - i, n - 1 - j)) + 1;

            cout << setw(3) << cellValue;
            if(j < n - 1) cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(true){
        cin >> n;
        if(n == 0) break;

        printMatrix(n);
    }
}
```