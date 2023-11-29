# Área da Circunferência

Bino quer calcular a área de uma circunferência e pediu sua ajuda para isso.

Faça um programa para ler um valor real R representando o raio da circunferência que Bino que calcular a área. Imprima a área da circunferência utilizando como pi o valor 3.1416.

- Entrada

A entrada consiste de uma linha contendo o valor do raio da circunferência.

- Saída

A saída consiste de uma única linha contendo a área da circunferência com duas casas de precisão.

- Restrições

Os valores fornecidos não serão negativos nem maior que 10000

Exemplos de Entrada	Exemplos de Saída

        2                 12.57
        7                 153.94


# Solução em C
```
#include <stdio.h>
#include <stdlib.h>

int main(){    	
    float r;
	scanf("%f", &r);
	
	float area = 3.1416 * (r * r);
	
	printf("%.2f", area);

    return 0;
}
```
# Solução em C++
```
#include <iostream>
using namespace std;

int main() {
 	double r;
	cin >> r;
	
	double area = 3.1416 * (r * r);
	
	cout.precision(2);
	cout.setf(ios::fixed);
	
	cout << area << endl;

    return 0;
}
```