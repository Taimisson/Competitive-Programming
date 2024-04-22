# Repetir X Vezes

Faça um programa que leia um inteiro X e imprima X vezes a mensagem "NepsAcademy eh Sucesso".

- Entrada

A entrada consiste de uma linha contendo um inteiro X.

- Saída

A saída consiste de X linhas, cada uma contendo a mensagem indicada no enunciado.

- Restrições

1≤X≤100

Exemplos de Entrada	| Exemplos de Saída

        1               NepsAcademy eh Sucesso
        
        4               NepsAcademy eh Sucesso
                        NepsAcademy eh Sucesso
                        NepsAcademy eh Sucesso
                        NepsAcademy eh Sucesso

# Solução em C

```
#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
		printf("NepsAcademy eh Sucesso");

    return 0;
}
```
# Solução em C++

```
#include <iostream>

using namespace std;

int main(){
    int n; 
	cin >> n;
	
	for(int i = 0; i < n; i++)
		cout << "NepsAcademy eh Sucesso" << endl;	
	
    return 0;
}
```