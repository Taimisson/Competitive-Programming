# Sumário

- Exemplo de problema;
- Estrutura For;
- Codificação.

# Problema

Faça um programa que leio um número inteiro N e imprima N vezes a mensagem "Neps".

Para resolver esse problema temos duas opções. Podemos utilizar a estrutura While, aprendida na aula anterior, assim como também podemos utilizar a estrutura For.

# Estrutura For

A estrutura for é semelhante ao While, pois é uma estrutura de repetição que repete um treço de código enquanto uma certa condição for verdadeira. Porém, podemos incluir um comando antes de ser executada a primeira verificação e um comando que vai ser executado ao final de cada repetição.

# Sintaxe
```
for(inicialização; condição; incremento){
	//Código
}
```

# Codificação

```
#include<stdio.h>

int main(){
	int n;
	int i;
	scanf("%d", &n);
	
	i = 1; // inicializacao
	while(i<=n){ //condicao
		printf("Neps\n");
		i = i+1; // incremento
	}
}
```

Caso 
�
n seja 1, o i começará em 1, vai testar a condição, que é verdadeira, pois 1 é menor ou igual a 1, executar o printf e incrementar o i em 1, tornando-se 2, e no segundo teste a condição será falsa, pois 2 não é menor ou igual a 1, então a execução será parada.

Então, como resultado do programa, será imprimida a linha "Neps" apenas uma vez. Caso n seja 2, serão imprimidas duas linhas, e assim por diante.

Na estrutura while, só podemos colocar a condição para verificar quando a estrutura vai parar. Porém, no for podemos utilizar outros dois parâmetros, o de inicialização, executado ao começo da estrutura, e o de incremento, que é executado a cada repetição.

Sendo assim, na codificação com o for, podemos inicializar a variável que utilizamos para contar a repetições dentro da estrutura, fazer a verificação, e incrementar a variável de uma maneira muito compacta.

A solução com a estrutura For é a seguinte:

```
#include<stdio.h>

int main(){
	int n;
	int i;
	scanf("%d", &n);
	
	for(i = 1; i<=n; i = i+1){
		printf("Neps\n");
	}
}
```