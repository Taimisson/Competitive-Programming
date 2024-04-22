# 263A  Beautiful Matrix

https://codeforces.com/problemset/problem/263/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int matriz[5][5];
    int linha, coluna;
    
    for(int i = 0; i < 5; ++i)
        for(int j = 0; j < 5; ++j){
            cin >> matriz[i][j];
            if(matriz[i][j] == 1){
                linha = i;
                coluna = j;
            }
        }
    
    int mov_vertical = abs(linha - 2);
    int mov_horizontal = abs(coluna -2);
    
    cout << mov_horizontal + mov_vertical << "\n";
    
}
```