# 2310 - Voleibol

Um treinador de voleibol gostaria de manter estatísticas sobre sua equipe. A cada jogo, seu auxiliar anota quantas tentativas de saques, bloqueios e ataques cada um de seus jogadores fez, bem como quantos desses saques, bloqueios e ataques tiveram sucesso (resultaram em pontos). Seu programa deve mostrar qual o percentual de saques, bloqueios e ataques do time todo tiveram sucesso.

[https://www.beecrowd.com.br/judge/pt/problems/view/2310](https://www.beecrowd.com.br/judge/pt/problems/view/2310)

# Solução

```
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

void solve(int n){
    string lixo;
    int totalSaques = 0, totalBloqueios = 0, totalAtaques = 0;
    int sucessosSaques = 0, sucessosBloqueios = 0, sucessosAtaques = 0;
    for(int i = 0; i < n; ++i){
        int S, B, A, S1,B1,A1;
        cin >> lixo;
        cin >> S >> B >> A;
        cin >> S1 >> B1 >> A1;

        totalSaques += S;
        totalBloqueios += B;
        totalAtaques += A;
        sucessosSaques += S1;
        sucessosBloqueios += B1;
        sucessosAtaques += A1;
    }
    double percentualSaques = (totalSaques > 0 ? (double)sucessosSaques / totalSaques * 100 : 0);
    double percentualBloqueios = (totalBloqueios > 0 ? (double)sucessosBloqueios / totalBloqueios * 100 : 0 );
    double percentualAtaques = (totalAtaques > 0 ? (double)sucessosAtaques / totalAtaques * 100 : 0);

    cout << fixed << setprecision(2);
    cout << "Pontos de Saque: " << percentualSaques << " %." << "\n";
    cout << "Pontos de Bloqueio: " << percentualBloqueios << " %." << "\n";
    cout << "Pontos de Ataque: "<< percentualAtaques << " %." << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    solve(n);
}
```