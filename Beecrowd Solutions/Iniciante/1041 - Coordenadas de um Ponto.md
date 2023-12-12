# 1041 - Coordenadas de um Ponto

Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0).

![Alt text](image-1.png)

Se o ponto estiver na origem, escreva a mensagem “Origem”.

Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.

[Coordenadas de um Ponto - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1041)

# Solução 
```
#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    if(x == 0 && y == 0)
        cout << "Origem" << endl;
    else if(x == 0)
        cout << "Eixo Y" << endl;
    else if(y == 0)
        cout << "Eixo X" << endl;
    else if(x > 0 && y > 0)
        cout << "Q1" << endl;
    else if(x > 0 && y < 0)
        cout << "Q4" << endl;
    else if(x < 0 && y > 0)
        cout << "Q2" << endl;
    else if(x < 0 && y < 0)
        cout << "Q3" << endl;
    
    return 0;
}
```