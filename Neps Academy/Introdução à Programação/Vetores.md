# Sumário

- O que é um vetor?
- Para que serve um vetor?
- Vetores em C
- Como acessar os elementos de um vetor?
- Como atribuir valores aos elementos de um vetor?
- Como ler os elementos de um vetor?
- Exemplo

# O que é um vetor?

Vetores armazenam um conjunto de variáveis.

Em C, os vetores são homogêneos. Isto é, as variáveis armazenadas por um vetor são todas do mesmo tipo.

# Para que serve um vetor?

Um vetor serve, no geral, para criarmos várias variáveis de um mesmo tipo de uma maneira simples.

Também podemos utilizar vetores para automatizar tarefas.

# etores em C

A declaração de um vetor em C segue o template abaixo:
```
<tipo> <nome>[<tamanho>];
```

Para facilitar o entendimento, analise o exemplo abaixo:
```
/*
    tipo -> int (armazena inteiros)
    nome -> vetor
    tamanho -> 3 (armazena três elementos)
*/

int vetor[3];
```

Ao declarar um vetor, o computador irá reservar um conjunto de posições sequenciais de memória.

Isto significa que, no exemplo acima, o computador reservou três posições sequenciais capazes de armazenar inteiros.

# Observações:

- Os vetores em C têm o mesmo tamanho desde sua declaração até o final do programa.

- Podemos utilizar o comando sizeof para saber o número de bytes de um vetor. Caso queiramos saber quantos elementos ele tem de fato, basta dividir o tamanho em bytes do vetor pelo tamanho em bytes do tipo do vetor:

```
#include <stdio.h>

int main(){
    int v[5];

    printf("Tamanho em bytes de um inteiro -> %d\n", sizeof(int));
    printf("Tamanho em bytes do vetor v -> %d\n", sizeof(v));
    printf("Quantidade de elementos do vetor v -> %d\n", sizeof(v)/sizeof(int));
}
/* Saída:
Tamanho em bytes de um inteiro -> 4
Tamanho em bytes do vetor v -> 20
Quantidade de elementos do vetor v -> 5

*/
```

# Como acessar os elementos de um vetor?
O nome do vetor é tratado como um ponteiro para a primeira posição de memória reservada para ele.

Para acessar cada posição do vetor, podemos utilizar tanto a aritmética de ponteiros quanto o operador [ ], indicando entre colchetes qual a posição que desejamos acessar.

Como exemplo, vamos analisar o acesso aos elementos do vetor int x[4] :

*x	*(x+1)	*(x+2)	*(x+3)
x[0]	x[1]	x[2]	x[3]
Perceba que, ao utilizar o operador [ ], a primeira posição do vetor é dada pelo índice 0.

Dessa forma, um vetor de tamanho N possui N elementos que podem ser acessados pelos índices de 0 até N−1.

Observação: a aritmética de ponteiros funciona porque o conjunto de posições reservadas para o vetor é sequencial. Para facilitar, veja a saída do código abaixo:

```
#include <stdio.h>

int main(){
    int v[3];

    /*
        Como o tamanho de um inteiro eh de 4 bytes, a distancia entre
    duas posicoes consecutivas do vetor v deve ser de 4 bytes tambem
    */

    printf("Primeira posicao -> %d\n", &v[0]);
    printf("Segunda posicao -> %d\n", &v[1]);
    printf("Terceira posicao -> %d\n", &v[2]);
}
/* Saída:
Primeira posicao -> 6422292
Segunda posicao -> 6422296
Terceira posicao -> 6422300

*/
```

# Como atribuir valores aos elementos de um vetor?

Há duas formas de atribuir valores aos elementos de um vetor:

Alterando todos os elementos do vetor(único método que pode ser utilizado junto com a declaração):

```
int v[5] = {1, 2, 3, 4, 5}
/*
v[0] = 1
v[1] = 2
v[2] = 3
v[3] = 4
v[4] = 5
*/
v = {5, 4, 3, 2, 1};
/*
v[0] = 5
v[1] = 4
v[2] = 3
v[3] = 2
v[4] = 1
*/
```
Observações:

- Se formos declarar todos os elementos do vetor na sua declaração, podemos omitir o tamanho, pois ele se ajustará à quantidade de elementos presentes dentro das chaves:

```
int x[] = {1, 2, 3}; // x possui 3 elementos

int y[] = {12, 15, 18, 21}; // y possui 4 elementos
```

- Para inicializar um vetor com o valor 0 em todas as suas posições, podemos utilizar a lógica da observação acima e não colocar nenhum elemento dentro das chaves:

```
int z[3] = {};
/*
z[0] = 0;
z[1] = 0;
z[2] = 0;
*/
```

- Alterando apenas um elemento:

```
int v[5];

v[0] = 7; // primeira posicao do vetor

v[4] = 9; // quinta posicao do vetor

*(v+2) = 123; // terceira posicao do vetor
```

# Como ler os elementos de um vetor?

Para ler os elementos de um vetor, podemos utilizar o comando scanf das seguintes duas formas:

Utilizando o e comercial("&") e o operador [ ] indicando a posição do vetor:

```
int v[7];

scanf("%d", &v[3]); // ler o valor a ser colocado na quarta posicao do vetor
/*
    A utilização do e comercial é necessária pois, ao utilizar o operador [], não
estamos pegando o endereço do elemento, mas acessando o elemento de fato
*/
```

Utilizando a aritmética de ponteiros, sem o e comercial:

```
int v[7];

scanf("%d", v+2); // ler o valor a ser colocado na terceira posicao do vetor
/*
    A utilização do e comercial não é necessária pois, ao utilizar aritmética de ponteiros,
estamos pegando o endereço do elemento, visto que o nome do vetor é um ponteiro para a sua primeira posição
*/
```

# Exemplo

```
#include <stdio.h>

int main(){
    int v[5];

    for(int i=0;i<5;i++){
        scanf("%d", &v[i]);
    }

    for(int i=0;i<5;i++){
        if(*(v+i) % 2 == 0){
            printf("O numero na posicao %d do vetor eh par!\n", i);
        }
        else{
            printf("O numero na posicao %d do vetor eh impar!\n", i);
        }
    }
}
```

Perceba que o código acima utiliza um laço for para percorrer por todos os índices do nosso vetor e ler seus respectivos elementos utilizando o comando scanf.

Após isso, utilizamos novamente um laço for para percorrer por todos os elementos do vetor e checar, um por um, se são pares ou ímpares.