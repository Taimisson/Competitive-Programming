# 2779 - Álbum da Copa

Dados o número total de espaços e figurinhas do álbum, e uma lista das figurinhas já compradas (que pode conter figurinhas repetidas), sua tarefa é determinar quantas figurinhas faltam para completar o álbum.

[Álbum da Copa - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2779)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int espacosAlbum, qntdFigCompradas;
    set<int> figCompradas;
    cin >> espacosAlbum >> qntdFigCompradas;
    for(int i = 0; i < qntdFigCompradas; i++){
        int fig;
        cin >> fig;
        figCompradas.insert(fig);
    }

    cout << espacosAlbum - figCompradas.size() << endl;
}
```
