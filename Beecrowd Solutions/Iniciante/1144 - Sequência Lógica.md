# 1144 - Sequência Lógica

Escreva um programa que leia um valor inteiro N. N * 2 linhas de saída serão apresentadas na execução do programa, seguindo a lógica do exemplo abaixo. Para valores com mais de 6 dígitos, todos os dígitos devem ser apresentados.

[Sequência Lógica - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1144)

# Solução

```
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n; 
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        cout << i << " " << i * i << " " << i * i * i << "\n";
        cout << i << " " << i * i + 1 << " " << i * i * i + 1 << "\n";
    }
}
```