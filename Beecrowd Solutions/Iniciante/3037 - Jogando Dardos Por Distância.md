# 3037 - Jogando Dardos Por Distância

João e Maria criaram sua própria versão de jogar dardos, dardos por distância. Cada um jogava 3 dardos, escolhendo qual distância irão jogar do alvo. No jogo normal de dardos, se pontua um número 

João pede para você fazer um algorítimo que dado a pontuação e a distância de cada jogada devolve o vencedor

[Jogando Dardos Por Distância - Beecrowd](https://judge.beecrowd.com/pt/problems/view/3037)

# Solução

```
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        int pontuacaoJoao = 0, pontuacaoMaria = 0;
        // Lendo os arremessos de João
        for (int i = 0; i < 3; i++) {
            int X, D;
            cin >> X >> D;
            pontuacaoJoao += X * D;
        }
        // Lendo os arremessos de Maria
        for (int i = 0; i < 3; i++) {
            int X, D;
            cin >> X >> D;
            pontuacaoMaria += X * D;
        }
        // Comparando as pontuações e imprimindo o vencedor
        if (pontuacaoJoao > pontuacaoMaria) {
            cout << "JOAO" << endl;
        } else {
            cout << "MARIA" << endl;
        }
    }

    return 0;
}
```