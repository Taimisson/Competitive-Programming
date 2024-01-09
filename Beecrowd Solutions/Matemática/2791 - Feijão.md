# 2791 - Feijão

Conta-se nos arredores de Montes Claros que, há muito tempo no mercado municipal, Sebastião e seus companheiros de trabalho sempre jogam uma partida de adivinhação após a entrega dos produtos agrícolas colhidos na semana que se passou. O jogo, que se chama 
Adivinhe Onde o Feijão Está'', consiste em esconder um grão de feijão em um de quatro copos opacos e, depois de embaralhá-los, o apostador deve adivinhar em qual copo o legume está.

Neste ano, devido ao grande sucesso cultural e histórico e à enorme quantidade de pessoas que praticam este jogo no mercado municipal, a prefeitura resolveu realizar um campeonato de 
Adivinhe Onde o Feijão Está''. Entretanto, ela necessita de um programa para mostrar aos expectadores onde o feijão estava após o fim de uma partida. Sabendo que a próxima Maratona Mineira de Programação ocorrerá na cidade, ela logo encomendou uma solução aos exímios programadores. Desta forma, você deve auxiliar a organização nesta missão com um programa que informe, ao fim de uma partida, onde o feijão esteve.

[Feijão - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/2791)

# Solução

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int x;
    for(int i = 1; i <= 4; ++i){
        cin >> x;
        if(x > 0) cout << i << "\n";
    }
}
```