# Inverso

Faça um programa para ler 10 valores inteiros como entrada e imprima na ordem inversa da que foram lidos.

- Entrada

A entrada consiste de 10 linhas, cada linha contém um valor inteiro.

- Saída

A saída consiste de dez linha contendo, cada linha com um os 10 valores lidos, porém, na ordem contrária da que foram lidos.

Exemplos de Entrada	| Exemplos de Saída

        1                   10
        2                   9
        3                   8
        4                   7
        5                   6
        6                   5
        7                   4
        8                   3  
        9                   2
        10                  1


# Solução em C
```
#include <iostream>
using namespace std;

int main(){
    int vetor[10];
	
	for(int i = 0; i < 10; i++)
		scanf("%d", &vetor[i]);
	
	for(int i = 9; i >= 0; i--)
		printf("%d\n", vetor[i]);

    return 0;
}

```
# Solução em C++
```
#include <iostream>
using namespace std;

int main(){
    int vetor[10];
	
	for(int i = 0; i < 10; i++)
		cin >> vetor[i];
	
	for(int i = 9; i >= 0; i--)
		cout << vetor[i] << endl;

    return 0;
}
```