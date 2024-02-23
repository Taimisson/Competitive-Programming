# 2061 - As Abas de Péricles

Sua tarefa é descobrir com quantas abas que o navegador de Péricles ficou, sabendo o número inicial de abas e a sequência de ações de Péricles. As ações podem ser fechou (quando Péricles fechou uma aba) ou clicou (quando Péricles clicou em uma propaganda).

[As Abas de Péricles - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2061)

# Solução

```
#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    string action;
    for (int i = 0; i < M; ++i) {
        cin >> action; 

        if (action == "fechou") N += 1;
        else if (action == "clicou") N -= 1;
    }
    cout << N << endl;
    
    return 0;
}

```