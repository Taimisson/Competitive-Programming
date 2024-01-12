# 1541 - Construindo Casas

Sr PI é um construtor muito famoso na cidade de Programolândia. Ele precisa de sua ajuda para encontrar os melhores terrenos da cidade, para realizar assim a construção de vários projetos de casas que possui.

[Construindo Casas - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1541)

# Solução

```
#include <iostream>
#include <cmath> // Para usar a função sqrt
using namespace std;

int main() {
    int A, B, C;

    while (true) {
        cin >> A >> B >> C;
        if (A == 0) break; // Condição de término

        // Calcula a área necessária do terreno
        double areaCasa = A * B;
        double percentual = C / 100.0;
        double areaTerreno = areaCasa / percentual;

        // Calcula o lado do terreno e arredonda para baixo
        int ladoTerreno = sqrt(areaTerreno);

        cout << ladoTerreno << endl;
    }

    return 0;
}
```