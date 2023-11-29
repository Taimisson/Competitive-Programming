# Sumário

- Tarefa;
- Estrutura doWhile;
- Codificação.

# Tarefa

Faça um programa que leia um número inteiro N até que o número digitado seja 2018. Temos três opções para resolver o problema.

- Utilizar a estrutura while.
- Utilizar a estrutura for.
- Utilizar a estrutura doWhile.

# Estrutura doWhile

A estrutura doWhile é uma estrutura de repetição que executa um trecho de código enquanto uma certa condição for verdadeira. A diferença dela para a estrutura while, é que ela não testa a condição antes da primeira iteração.

# Sintaxe
```
do{
	//Código
} while( condição );
```

```
#include<stdio.h>

int main(){
	int n;
	
	do{
		scanf("%d", &n);
	} while(n!=2018);
}
```

Primeiro pedimos para o programa reservar espaço em memória para uma variável inteira n. Depois, o código dentro de do será executado antes de se fazer a verificação do while e caso a condição seja verdadeira, é executado novamente o código entre chaves até que ela seja falsa, que será quando n for igual a 2018.