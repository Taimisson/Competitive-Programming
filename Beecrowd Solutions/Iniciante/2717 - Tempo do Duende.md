# 2717 - Tempo do Duende

A fabricação dos presentes para o Natal é um processo muito complicado. Diversas vezes os duendes ficam até tarde trabalhando para que tudo possa ser terminado a tempo e com perfeição.

Para melhor gerenciar seus cronogramas, os duendes estipularam quantos minutos são necessários para fabricar cada presente.

Já está quase no final do expediente, e um dos duendes pediu sua ajuda.

Faltam N minutos para a hora de ir embora, e restam dois presentes para o duende Ed fabricar. Ajude-o a descobrir se ele conseguirá fabricar os dois ainda hoje, ou se deve deixar o trabalho para amanhã.

[Tempo do Duende - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/2717)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, a, b;
    cin >> n >> a >> b;
    if(a + b <= n)
        cout << "Farei hoje!" << "\n";
    else
        cout << "Deixa para amanha!" << "\n";
}
```