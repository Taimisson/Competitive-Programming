# Sumário

- O que é um caractere?
- Representação na memória
- Tabela ASCII
- Especificando caracteres no código
- Entrada e saída de caracteres

# O que é um caractere? 

Caracteres são os símbolos tipográficos utilizados em textos. Exemplos: letras do alfabeto, algarismos numéricos, sinais de pontuação etc.

Assim como os tipos int e float, existe o tipo char em C, que é capaz de armazenar um caractere:

```
char c; // variavel c guarda um caractere
```

# Representação na memória

Um caractere, ou um valor do tipo char, ocupa 1 byte de tamanho na memória, ou seja, 8 bits. Observe:

```
#include <stdio.h>

int main(){
    printf("%d\n", sizeof(char));
}
/* Saída:
1

*/
```

Apesar do tipo char servir para armazenar caracteres, ele irá guardar um valor inteiro, assim como tudo no computador.

Dessa forma, a linguagem C irá utilizar-se da tabela ASCII para saber qual caractere cada número inteiro representa.

# Tabela ASCII

A tabela ASCII, ou American Standard Code for Information Interchange, faz a associação entre números inteiros e caracteres. Exemplo: a letra 'A'(maiúscula) corresponde ao número decimal 
65
65.

Como o tipo char ocupa 8 bits de memória, ele é capaz de armazena todos os números de −128 até 127 (inclusive), ou seja, 256 valores distintos.

Dessa forma, cada um desses valores representa um caractere diferente na tabela ASCII.

Você pode conferir a tabela completa no site asciitable. Perceba que a tabela mencionada possui cinco colunas: os valores decimal, hexadecimal, octal, o código html e o caractere respectivo. Por enquanto, as únicas duas colunas que nos importarão serão a primeira e a última.

# Especificando caracteres no código

Para especificar um determinado caractere em C, devemos utilizar aspas simples:

```
char c = 'x'; // variavel c recebe o valor 'x', isto eh, armazena o caractere x
char c = x; // variavel c recebe o valor armazenado na variavel x
```

Também é possível fazer referência a um caractere utilizando sua representação decimal. Observe:

```
char c = 65; // variavel c recebe o valor 'A'
```

# Entrada e saída de caracteres

Assim como utilizamos o especificador %d para indicar que um valor inteiro será utilizado, devemos utilizar o especificador %c para caracteres. Observe:

```
#include <stdio.h>

int main(){
    char caractere;

    scanf("%c", &caractere);

    printf("%c %d\n", caractere, caractere);
}
```

Perceba que, no comando printf, utilizamos tanto o especificador de inteiros quanto o de caracteres para nos referirmos ao nosso caractere. Dessa forma, o programa irá imprimir o caractere seguido de sua representação decimal, visto que todo caractere é um inteiro.

Também é possível utilizar o %d para realizar a leitura de um caractere, com a única diferença que o usuário deverá digitar a representação decimal do caractere desejado.

Além dos comandos scanf e printf, também é possível utilizar os comandos getchar e putchar para realizar a entrada e saída de caracteres, respectivamente. Observe: