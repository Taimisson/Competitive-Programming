# 2780 - Basquete de Robôs

A organização da OIBR, Olimpíada Internacional de Basquete de Robô, está começando a ter problemas com dois times: os Bit Warriors e os Byte Bulls. É que os robôs desses times acertam quase todos os lan- çamentos, de qualquer posição na quadra! Pensando bem, o jogo de basquete ficaria mesmo sem graça se jogadores conseguissem acertar qualquer lançamento, não é mesmo? Uma das medidas que a OIBR está implantando é uma nova pontuação para os lançamentos, de acordo com a distância do robô para o início da quadra. A quadra tem 2000 centímetros de comprimento, como na figura.

[Basquete de Robôs - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2780)

# Solução

```
#include <iostream>

int main() {
    int D;
    std::cin >> D;
    
    int score;
    if (D <= 800) {
        score = 1;
    } else if (D <= 1400) {
        score = 2;
    } else {
        score = 3;
    }

    std::cout << score << std::endl;
    return 0;
}
```