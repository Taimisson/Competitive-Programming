# Quadrante

Faça um programa para ler dois inteiros X e Y representando um ponto em um plano cartesiano. Imprima qual quadrante esse ponto de encontra. Caso o ponto esteja em algum eixo, imprima apenas a mensagem "eixos".

- Entrada
A entrada consiste de duas linhas. A primeira linha contém o inteiro X. A segunda linha contém o inteiro Y.

- Saída
A saída consiste de uma linha contendo a mensagem indicando qual o quadrante que o ponto está.

- Restrições
100≤100,−100≤X,Y≤100

# Solução em C
```
#include <stdio.h>

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    
    if(x == 0 || y == 0)
        printf("eixos");
    else if(x > 0 && y > 0)
        printf("Q1");
    else if(x > 0 && y < 0)
        printf("Q4");
    else if(x < 0 && y > 0)
        printf("Q2");
    else if(x < 0 && y < 0)
        printf("Q3");
    
    return 0;
}
```


# Solução em C++
```
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    
    if(x == 0 || y == 0)
        cout << "eixos";
    else if(x > 0 && y > 0)
        cout << "Q1";
    else if(x > 0 && y < 0)
        cout << "Q4";
    else if(x < 0 && y > 0)
        cout << "Q2";
    else if(x < 0 && y < 0)
        cout << "Q3";
    

    return 0;
}
```