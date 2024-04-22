# Quantas Letras? 

Faça um programa para ler uma string S (sem espaços) e uma letra C. Seu programa deve imprimir a quantidade de vezes que a letra C aparece em S.

- Entrada

A entrada consiste de duas linhas. A primeira linha contém uma string S. A segunda linha contém uma letra C.

- Saída

A saída consiste de uma única linha contendo um inteiro correspondente a quantidade de vezes que a letra C aparece na string S

- Restrições

1≤∣S∣≤50

A string contém apenas letras minúsculas do alfabeto

Exemplos de Entrada  |  Exemplos de Saída

        neps
        x                   0
        academy
        a                   2
        nepsacademy
        y                   1


# Solução em C
```
#include <stdio.h>
#include <stdlib.h>

int main(){    	
  	char s[50], c;
	int count = 0;
	
	scanf("%s %c", s, &c);
	
	for(int i = 0; i < strlen(s); i++)
		if(s[i] == c)
			count++;
	
	printf("%d", count);
	
    return 0;
}
```
# Solução em C++
```
#include <iostream>
using namespace std;

int main(){
    string s; 
	char c;
	int count = 0;
	
	cin >> s >> c;
	
	for(int i = 0; i < s.size(); i++)
		if(s[i] == c)
			count++;
		
	cout << count << endl;
	
    return 0;
}
```