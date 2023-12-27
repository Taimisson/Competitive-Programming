# 1131 - Grenais

A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística do resultado de vários GRENAIS. Escreva um programa para ler o número de gols marcados pelo Inter e pelo Grêmio em um GRENAL. Logo após escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número de gols marcados pelos times em uma nova partida, caso contrário deve ser encerrado imprimindo:

- Quantos GRENAIS fizeram parte da estatística.
- O número de vitórias do Inter.
- O número de vitórias do Grêmio.
- O número de Empates.
- Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou "Nao houve vencedor", caso termine empatado).

[Grenais - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1131)

# Solução

```
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int inter_score = 0, gremio_score = 0, empate = 0, grenais = 0, pergunta;
    
    do{
        int x, y;
        cin >> x >> y;
        
        if(x == y)
            empate++;
        else if(x > y)
            inter_score++;
        else
            gremio_score++;
        
        grenais++;
        
        
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> pergunta;
        
        
    }while(pergunta == 1);
    
    cout << grenais << " grenais" << endl;
    cout << "Inter:" << inter_score << endl; 
    cout << "Gremio:" << gremio_score << endl;
    cout << "Empates:" << empate << endl;
    
    if(inter_score > gremio_score)
        cout << "Inter venceu mais" << endl;
    else if(gremio_score > inter_score)
        cout << "Gremio venceu mais" << endl;
    else
        cout << "Nao houve vencedor" << endl;
}
```