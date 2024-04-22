# Busca Simples no Vetor 01

Faça um programa para ler 10 valores inteiros, armazená-los em um vetor, depois ler um inteiro X. Imprima "SIM" se X aparece no vetor, ou "NAO" caso contrário.

- Entrada

A primeira linha da entrada consiste de 10 inteiros separados por um espaço em branco. A segunda linha contém um inteiro X.

- Saída
Imprima "SIM" se X aparece no vetor, ou "NAO" caso contrário.

- Restrições

Todos os valores fornecidos não serão negativos nem maiores que 100.

Exemplos de Entrada	    |   Exemplos de Saída

    1 1 3 3 4 4 6 6 5 5
            5                    SIM
    1 1 3 3 4 4 6 6 5 5
            2                    NAO

# Solução em C
```
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){    	
    int vetor[10], num;
	
	for(int i = 0; i < 10; i++)
		scanf("%d", &vetor[i]);
	
	scanf("%d", &num);
	
	bool encontrado = false;
	for(int i = 0; i < 10; i++)
		if(num == vetor[i]){
			printf("SIM");
			encontrado = true;
			break;
		}
	
	if(!encontrado)
		printf("NAO");

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
	
	int num;
	cin >> num;
	
	bool encontrado = false;
    for(int i = 0; i < 10; i++)
        if(num == vetor[i]){
            cout << "SIM";
            encontrado = true;
            break;
        }

    if(!encontrado)
        cout << "NAO";

    return 0;
}

```