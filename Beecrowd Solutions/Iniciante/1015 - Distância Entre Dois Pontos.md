# 1015 - Distância Entre Dois Pontos

Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:

Distancia = V(x2 - x1)² + (y2 - y1)²

[Distância Entre Dois Pontos - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1015)

# Solução 

```
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    cout << fixed << setprecision(4);
    cout << distancia << endl;

    return 0;
}
```