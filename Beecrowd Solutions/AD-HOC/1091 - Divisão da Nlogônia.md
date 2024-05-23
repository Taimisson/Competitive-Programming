# 1091 - Divisão da Nlogônia

Ficou decidido que um ponto, denominado ponto divisor, cujas coordenadas foram estabelecidas nas negociações, definiria a divisão do país, da seguinte maneira. Duas linhas, ambas contendo o ponto divisor, uma na direção norte-sul e uma na direção leste-oeste, seriam traçadas no mapa, dividindo o país em quatro novos países. Iniciando no quadrante mais ao norte e mais ao oeste, em sentido horário, os novos países seriam chamados de Nlogônia do Noroeste, Nlogônia do Nordeste, Nlogônia do Sudeste e Nlogônia do Sudoeste.

[Divisão da Nlogônia - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1091)

# Solução
```
#include <iostream>
using namespace std;

int main() {
    int k;
    while (cin >> k && k != 0) {
        int N, M;
        cin >> N >> M;
        while (k--) {
            int X, Y;
            cin >> X >> Y;
            if (X == N || Y == M) {
                cout << "divisa" << endl;
            } else if (X > N && Y > M) {
                cout << "NE" << endl;
            } else if (X > N && Y < M) {
                cout << "SE" << endl;
            } else if (X < N && Y > M) {
                cout << "NO" << endl;
            } else {
                cout << "SO" << endl;
            }
        }
    }
    return 0;
}
```