# 1961 - Pula Sapo

Você deve escrever um programa que, dadas as alturas dos canos e a altura do pulo do sapo, mostra se a fase do jogo pode ser vencida ou não.

[Pula Sapo - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1961)

# Solução

```
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int p, n;
    cin >> p >> n;
    
    vector<int> alturas(n);
    for(int i = 0; i < n; ++i)
        cin >> alturas[i];
        
    bool conseguePassar = true;
    for(int i = 1; i < n; ++i)
        if(abs(alturas[i] - alturas[i - 1]) > p){
            conseguePassar = false;
            break;
        }
    
    if(conseguePassar) cout << "YOU WIN" << "\n";
    else cout << "GAME OVER" << "\n";
    
    return 0;
    
}
```