# Busca Simples no Vetor 02

Faça um programa para ler 10 valores inteiros, armazená-los em um vetor, depois ler um inteiro X. Se X aparece no vetor, imprima quantas vezes ele aparece e depois quais os índices que ele aparece. Se X não aparecer no vetor, imprima apenas a mensagem "Mia x". Lembre-se que a primeira posição de um vetor tem índice 0.

- Entrada

A primeira linha da entrada consiste de 10 inteiros separados por um espaço em branco. A segunda linha contém um inteiro X.

- Saída

Se X aparece no vetor, a saída consiste de duas linhas, a primeira linha contém um inteiro representando a quantidade de vezes que X apareceu no vetor e a segunda linha contém os índices do vetor que contém valor igual ao X. Se X não aparecer no vetor, imprima apenas a mensagem "Mia x".

Exemplos de Entrada	    |     Exemplos de Saída
    1 2 3 4 5 6 7 8 9 10
            0                       Mia x

3 2 3 4 3 6 3 8 3 10                   5
            3                       0 2 4 6 8

# Solução em C
```
#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10], x, contador = 0, indice[10], j = 0;
	
	for(int i = 0; i < 10; i++){
		scanf("%d", &vetor[i]);
	}
	
	scanf("%d", &x);
	
	for(int i = 0; i < 10; i++){
		if(x == vetor[i]){
			contador++;
			indice[j] = i;
			j++;
		}
	}
	
	if(contador > 0){
		printf("%d\n", contador);
		for(int i = 0; i < contador; i++)
			printf("%d ", indice[i]);
	}else{
		printf("Mia x");
	}

    return 0;
}

```

# Solução em C++
```
#include <iostream>
using namespace std;

int main(){
    int vetor[10], x, contador = 0, indice[10], j = 0;
	
	for(int i = 0; i < 10; i++){
		cin >> vetor[i];
	}
	
	cin >> x;
	
	for(int i = 0; i < 10; i++){
		if(x == vetor[i]){
			contador++;
			indice[j] = i;
			j++;
		}
	}
	
	if(contador > 0){
		cout << contador << endl;
		for(int i = 0; i < contador; i++)
			cout << indice[i] << " ";
	}else{
		cout << "Mia x";
	}

    return 0;
}
```