# Valores Entre Dois Números

Faça um programa para ler dois valores inteiros A e B, e imprima todos os valores inteiros entre os números lidos em ordem crescente. Por exemplo, ao receber os valores 2 e 5, devem ser impressos os valores 2, 3, 4 e 5. Caso receba os valores 4 e -1, devem ser impressos os valores -1, 0, 1, 2, 3 e 4.

- Entrada
A entrada consiste de duas linhas. Cada linha consiste de um inteiro.

- Saída
A saída é composta de uma linha contendo todos os inteiros no intervalo fechado dos inteiros recebidos.

- Restrições
−100≤A,B≤100
Exemplos de Entrada	Exemplos de Saída

        2
        3               2 3

        2
        -3              -3 -2 -1 0 1 2
        

# Solução em C
```
#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int a, b;
	scanf("%d%d", &a, &b);
	
	if(a > b)
		for(int i = b; i <= a; i++)
			printf("%d ", i);
	else
		for(int i = a; i <= b; i++)
			printf("%d ", i);

    return 0;
}
```

# Solução em C++
```
#include <iostream>
using namespace std;

int main(){
    int A, B;
	cin >> A >> B;
	
    for(int i = min(A,B); i <= max(A,B); i++)
		cout << i << " ";

    return 0;
}

```