# 2540 - Impeachment do Líder

Para resolver a situação, uma votação será realizada entre todos os N jogadores do seu time. Cada jogador deverá votar se o impeachment deve ou não ocorrer. Se o número de votos favoráveis ao impeachment foi maior ou igual a 2/3 (dois terços) do total de jogadores, o líder será afastado. Caso contrário, a acusação é arquivada e ele continuará no cargo.

Dados os votos de todos os jogadores, determine o resultado da votação.

[Impeachment do Líder - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2540)

# Solução

```
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while(cin >> n){
        int x, votos = 0;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            if(x == 1) votos++;
        }

        if(votos * 3 >= 2 * n) cout << "impeachment" << endl;
        else cout << "acusacao arquivada" << endl;
    }

    return 0;

}
```