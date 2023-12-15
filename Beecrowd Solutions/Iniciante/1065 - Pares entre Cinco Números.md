# 1065 - Pares entre Cinco Números

Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.

[Pares entre Cinco Números - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1065)

# Solução
```
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int count = 0;
    for(int i = 0; i < 5; i++){
        int num;
        cin >> num;
        if(num % 2 == 0)
            count++;
    }

    cout << count << " valores pares" << endl;
    return 0;
}
```
