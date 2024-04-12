# 2702 - Escolha Difícil

Dada a quantidade de refeições disponíveis para cada escolha e o número de refeições pedidas para cada escolha, você poderia por favor ajudar a aeromoça a determinar quantos passageiros seguramente não poderão ser atendidos?

[Escolha Difícil - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2702)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int frango, bife, massa, qntdFrango, qntdBife, qntdMassa, passageirosSemRefeicao = 0;
    cin >> frango >> bife >> massa;
    cin >> qntdFrango >> qntdBife >> qntdMassa;

    if(qntdFrango > frango) passageirosSemRefeicao += qntdFrango - frango;
    if(qntdBife > bife) passageirosSemRefeicao += qntdBife - bife;
    if(qntdMassa > massa) passageirosSemRefeicao += qntdMassa - massa;

    cout << passageirosSemRefeicao << endl;

    return 0;
}
```
