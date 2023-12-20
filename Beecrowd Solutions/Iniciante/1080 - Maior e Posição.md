# 1080 - Maior e Posição

Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.

[Maior e Posição - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1080)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> vector(100);
    int maiorValor = -1;
    int pos = -1;
    
    for(int i = 0; i < 100; i++){
        cin >> vector[i];
        if(vector[i] > maiorValor){
            maiorValor = vector[i];
            pos = i;
        }
    }
    
    cout << maiorValor << "\n" << pos + 1 << "\n";
}
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    solve();

    return 0;
}```