# 2807 - Iccanobif

As sequências de Iccanobif são sequências onde cada termo é sempre igual a soma dos dois próximos subsequentes a eles. Exceto pelos dois últimos termos os quais são sempre iguais a 1.

Exemplo de uma sequência de Iccanobif com 10 termos: 55, 34, 21, 13, 8, 5, 3, 2, 1, 1.

Sua tarefa é, dado um valor inteiro, imprimir a sequência de Iccanobif de tamanho correspondente.

[Iccanobif - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2807)

# Solution

```
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> iccanobif(n);
    if(n > 0) iccanobif[0] = 1;
    if(n > 1) iccanobif[1] = 1;

    for(int i = 2; i < n; ++i) iccanobif[i] = iccanobif[i - 1] + iccanobif[i - 2];

    for(int i = n - 1; i > 0; --i) cout << iccanobif[i] << " ";

    if (n > 0) cout << iccanobif[0] << endl;

    return 0;
}
```