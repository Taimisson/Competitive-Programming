# Sumário

- O que é uma matriz?
- Matrizes em C
- Representação na memória
- Representação didática
- Como acessar os elementos de uma matriz?
- Aritmética de ponteiros em matrizes
- Como alterar os elementos de uma matriz?

# O que é uma matriz?

Matrizes armazenam um conjunto de vetores. Ou seja, uma matriz é um vetor de vetores.

Em C, as matrizes são homogêneas. Isto é, os vetores armazenados por uma matriz são todos do mesmo tipo.

Enquanto um vetor tem um conjunto de elementos que podem ser acessados pelo índice, uma matriz tem um conjunto de vetores que podem ser acessados pelo índice.

# Matrizes em C

A declaração de uma matriz em C segue o template abaixo:
```
<tipo> <nome>[<vetores>][<tamanho>];
```

```/*
    tipo -> int (armazena inteiros)
    nome -> matriz
    vetores -> 3 (armazena tres vetores)
    tamanho -> 3 (cada vetor armazena tres elementos)
*/

int matriz[3][3];
```

Perceba que, como nossa matriz contém três vetores de três elementos cada, então ela armazena nove elementos ao todo.

- Observações:

    - As matrizes em C têm o mesmo tamanho desde sua declaração até o final do programa.

    - Podemos utilizar o comando sizeof para saber o número de bytes de uma matriz. Caso queiramos saber quantos vetores ela tem, basta dividir o tamanho em bytes da matriz pelo tamanho em bytes de um vetor armazenado por ela. Analogamente, basta dividir o tamanho em bytes da matriz pelo tamanho em bytes do seu tipo para descobrir quantos elementos ela tem de fato:

```
#include <stdio.h>

int main(){
    int m[5][5];

    printf("Tamanho em bytes de um inteiro -> %d\n", sizeof(int));
    printf("Tamanho em bytes do vetor m[0] -> %d\n", sizeof(m[0]));
    printf("Tamanho em bytes da matriz m -> %d\n", sizeof(m));
    printf("Quantidade de vetores da matriz m -> %d\n", sizeof(m)/sizeof(m[0]));
    printf("Quantidade de elementos da matriz m -> %d\n", sizeof(m)/sizeof(int));
}
/* Saída:
Tamanho em bytes de um inteiro -> 4
Tamanho em bytes do vetor m[0] -> 20
Tamanho em bytes da matriz m -> 100
Quantidade de vetores da matriz m -> 5
Quantidade de elementos da matriz m -> 25

*/
```

# Representação na memória

Ao declarar uma matriz, o computador irá reservar um conjunto de posições sequenciais de memória.

Isto significa que, para o exemplo int matriz[3][3], o computador reservou espaço para armazenar três vetores, cada um capaz de armazenar três inteiro.

![Alt text](image.png)