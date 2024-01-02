# 1180 - Menor e Posição

Faça um programa que leia um valor N. Este N será o tamanho de um vetor X[N]. A seguir, leia cada um dos valores de X, encontre o menor elemento deste vetor e a sua posição dentro do vetor, mostrando esta informação.

[Menor e Posição - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1180)

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> nums(n);

    int menor = INT_MAX;
    int pos = -1;

    for(int i = 0; i < n; ++i){
        cin >> nums[i];
       if(nums[i] < menor){
           menor = nums[i];
           pos = i;
       }
    }

    cout << "Menor valor: " << menor << "\n";
    cout << "Posicao: " << pos << "\n";
}
```