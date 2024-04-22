# Positivo, Negativo ou Nulo

Faça um programa para ler um inteiro x. Imprima a mensagem "positivo" se o valor for positivo. Imprima a mensagem "negativo" caso o valor seja negativo. Imprima a mensagem "nulo" se o valor for zero.

- Entrada

A entrada consiste de uma linha contendo um inteiro.

- Saída

A saída consiste de uma linha contendo uma mensagem.

- Restrições

O valor fornecido não terá valor absoluto maior que 1000.

Exemplos de Entrada	| Exemplos de Saídaz

        7               positivo
        -8              negativo
        0               nulo

# Solução em C
```
#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int X;
	scanf("%d",&X);

    // Seu código vai aqui
	if(X > 0)
		printf("positivo");
	else if(X < 0)
		printf("negativo");
	else
		printf("nulo");	

	return 0;
}
```
# Solução em C++
```
#include <iostream>
using namespace std;

int main(){
    // Lendo a entrada do exercício
    int X;
    cin >> X;

    // Seu código vai aqui
	if(X > 0)
		cout << "positivo" << endl;
	else if(X < 0)
		cout << "negativo" << endl;
	else
		cout << "nulo" << endl;
	
    return 0;
}
```
