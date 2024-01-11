# 1957 - Converter para Hexadecimal

Os dados armazenados no computador estão em binário. Uma forma econômica de ver estes números é usar a base 16 (hexadecimal).

Sua tarefa consiste em escrever um programa que, dado um número natural na base 10, mostre sua representação em hexadecimal.

[Converter para Hexadecimal - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1957)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int v;
    cin >> v;

    stringstream  ss;
    ss << hex << uppercase << v;

    cout << ss.str() << "\n";
}
```