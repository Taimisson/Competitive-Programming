# 1789 - A Corrida de Lesmas

A corrida de lesmas é um esporte que cresceu muito nos últimos anos, fazendo com que várias pessoas dediquem suas vidas tentando capturar lesmas velozes, e treina-las para faturar milhões em corridas pelo mundo. Porém a tarefa de capturar lesmas velozes não é uma tarefa muito fácil, pois praticamente todas as lesmas são muito lentas. Cada lesma é classificada em um nível dependendo de sua velocidade:

Nível 1: Se a velocidade é menor que 10 cm/h .
Nível 2: Se a velocidade é maior ou igual a 10 cm/h e menor que 20 cm/h .
Nível 3: Se a velocidade é maior ou igual a 20 cm/h .

Sua tarefa é identificar qual nível de velocidade da lesma mais veloz de um grupo de lesmas.

[A Corrida de Lesmas - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1789)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    int lesmas[n], nivel = 1;
    for(int i = 0; i < n; ++i){
        cin >> lesmas[i];
    }
    for(int i = 0; i < n; ++i){
        if(lesmas[i] >= 20){
            nivel = 3;
            break;
        }else if(lesmas[i] >= 10){
            nivel = 2;
        }else
            continue;
    }
    cout << nivel << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int l;
    while(cin >> l){
        solve(l);
    }

}
```