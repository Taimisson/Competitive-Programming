# Par ou Impar

Bino e Cino gostam muito de brincar de par ou ímpar. Bino sempre escolhe par e Cino sempre escolhe ímpar.

Faça um programa para automatizar o resultado o jogo de par ou ímpar. Seu programa deve ler a quantidade de dedos que cada um utilizou e imprimir o nome do ganhador.

- Entrada

A entrada consiste de duas linhas. A primeira linha contém a quantidade de dedos que Bino utilizou. A segunda linha contém a quantidade de dedos que Cino utilizou.

- Saída

A saída consiste de uma linha. Caso Bino vença o jogo, imprima "Bino". Caso Cino vença o jogo, imprima "Cino".

- Restrições

Como Bino e Cino só tem 10 dedos (contando as duas mãos), os valores fornecidos serão valores entre 0 e 10.


Exemplos de Entrada	| Exemplos de Saída

        2
        3                   Cino

        0
        4                   Bino

        5
        3                   Bino

        4
        1                   Cino

# Solução em C
```
#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int B, C;
	scanf("%d",&B);
	scanf("%d",&C);

    // Seu código vai aqui
	if((B + C) % 2 == 0)
		printf("Bino");
	else
		printf("Cino");
	
	return 0;
}
```

# Solução em C++
```
#include <iostream>
using namespace std;

int main(){
    int B, C;
	cin >> B >> C;
	
	if((B+C) % 2 == 0)
		cout << "Bino" << endl;
	else
		cout << "Cino" << endl;
	
	return 0;
}
```
