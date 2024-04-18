# 1436 - Jogo do Tijolo

A falta de comunicação entre dois jogadores depende da sua diferença de idade, ou seja, é maior se a diferença de idade for maior. Assim, eles selecionam o capitão de uma equipe de maneira que a quantidade de jogadores desta equipe que são mais jovens e mais velhos do que ele é igual.

[Jogo do Tijolo - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1436)

# Solução

```
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        vector<int> membros(x);
        for(int j = 0; j < x; ++j)
            cin >> membros[j];
        int meio = membros[membros.size() / 2];
        cout << "Case " << i + 1 << ": " << meio << endl;
    }
    
    return 0;
}
```