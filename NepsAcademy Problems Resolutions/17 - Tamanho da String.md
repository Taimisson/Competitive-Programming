# Tamanho da String

Faça um programa para ler uma string S (sem espaços) e imprima o tamanho da string S.

- Entrada
A entrada consiste de uma única linha contendo uma string S.

- Saída
A saída consiste de uma única linha contendo um inteiro correspondente ao tamanho da string S.

- Restrições

1≤∣S∣≤50
A string contém apenas letras minúsculas do alfabeto.

Exemplos de Entrada	 |  Exemplos de Saída
      neps                      4
     academy                    7
    nepsacademy                 11

# Solução em C
```
#include <stdio.h>
#include <stdlib.h>

int main(){    	
    char string[50];
	
	scanf("%s", string);
	printf("%d", strlen(string));
	
    return 0;
}
```
# Solução em C++
```
#include <iostream>
using namespace std;

int main(){
	
    string str;
	cin >> str;
	cout << str.size();

    return 0;
}
```