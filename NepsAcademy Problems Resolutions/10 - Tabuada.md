# Tabuada

Bino está aprendendo a multiplicar números e gostaria da sua ajudar para apresentar a tabuada de um determinado valor inteiro X.

- Entrada

A entrada consiste em uma única linha contendo o valor inteiro X.

- Saída

A saída consiste de 10 linhas. A i-éssima linha constem a mensagem "x * i = valor", onde x é o valor de X, i representa a o identificar da linha e o valor é o valor da múltiplicação de X∗i

- Restrições

0≤X≤1000

Exemplos de Entrada	| Exemplos de Saída

        1               1 * 1 = 1
                        1 * 2 = 2
                        1 * 3 = 3
                        1 * 4 = 4
                        1 * 5 = 5
                        1 * 6 = 6
                        1 * 7 = 7
                        1 * 8 = 8
                        1 * 9 = 9
                        1 * 10 = 10

        2               2 * 1 = 2
                        2 * 2 = 4
                        2 * 3 = 6
                        2 * 4 = 8
                        2 * 5 = 10
                        2 * 6 = 12
                        2 * 7 = 14
                        2 * 8 = 16
                        2 * 9 = 18
                        2 * 10 = 20

# Solução em C
```
#include <stdio.h>
#include <stdlib.h>

int main(){    	
    // Seu código vai aqui
	int n;
	scanf("%d", &n);
	
	for(int i = 1; i <= 10; i++)
		printf("%d * %d = %d", n, i, n*i);
        
    return 0;
}
```
# Solução em C++
```
#include <iostream>
using namespace std;

int main(){
    // Seu código vai aqui
	int n;
	cin >> n;
	
	for(int i = 1; i <= 10; i++)
		cout << n << " * " << i << " = " << i * n << endl;

    return 0;
}
```