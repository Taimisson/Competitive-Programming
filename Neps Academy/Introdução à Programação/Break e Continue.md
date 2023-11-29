# Sumário

Nessa aula você aprendará dois comandos, o continue e o break.

Para exemplificar os comandos, utilizaremos como base o seguinte
programa, que imprime os números de 0 a 5.

```
#include<stdio.h>

int i;
for(int i = 0; i < 6; i++){
	printf("%d\n", i);
}
```

# Continue

O comando continue serve para ir para a próxima iteração (ciclo) de uma estrutura de repetição.

```
#include<stdio.h>

int i;
for(int i = 0; i < 6; i++){
	if(i == 2){
		continue;
	}
	printf("%d\n", i);
}
```

Ao executar esse programa, percebemos que o número 2 não é imprimido. Isso acontece pois no momento em que o i for igual a 2, o código do if é executado, e como o que está dentro desse if é o comando continue, que vai para a próxima iteração do código, o printf que estava abaixo é ignorado, não imprimindo o 2.

# Break

O comando break termina um laço de repetição.

```
#include<stdio.h>

int i;
for(int i = 0; i < 6; i++){
	if(i == 2){
		break;
	}
	printf("%d\n", i);
}
```

Nesse caso, ao executar o programa, percebemos que são imprimidos apenas os números 0 e 1. Isso acontece porque no momento em que o contador i for igual a 2, o if será ativado e será executado o comando break, que termina o for, não permitindo que ele imprima o resto dos números