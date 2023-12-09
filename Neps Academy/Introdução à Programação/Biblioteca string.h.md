# Sumário

- O que é a biblioteca string.h?
- Função strlen.
- Função strcpy.
- Função strcmp.
- Função strcat.
- Função strstr.
- Codificação: Utilização da biblioteca.

O que é a biblioteca string.h?
Uma biblioteca é um arquivo que contém várias fnções.
- Cada biblioteca contém funções específicas para 
- alguma finalidade. Por exemplo:
    - stdio.h: Funções de entrada e saída de dados.
    - string.h: Funções de manipulação de strings.
Para podermos utilizar as funções que estão na biblioteca, incluímos a biblioteca no começo do código escrevendo "#include <string.h>".

```
#include <string.h>
```

# Função strlen
Função que espera receber uma posição de memória que contém uma string e vai retornar quantos caracteres existem entre a posição recebida e o próximo '\0'.

Exemplo:

```
char s[10] = "abcd";
printf("%d", strlen(s) ); //Imprime 4
```

# Função strcpy

Função que espera receber duas posições de memórias contendo strings e vai atribuir a segunda string para a primeira.

Exemplo:

```
char a[10] = "abcd";
char b[10];

strcpy(b, a); //b recebe a
printf("%s\n", b); //Imprime "abcd"
```

É importante observar que como segundo parâmetro podemos fornecer tanto um ponteiro quanto uma string. Se substituirmos a variável a no strcpy do código acima por "neps", ele imprimiria "neps", mesmo que essa string não esteja alocada em um espaço de memória.

# Função strcmp

Função que espera receber duas posições de memória contendo strings e vai comparar lexicograficamente as strings.

Se str1 == str2, retorna 0
Se str1 < str2, retorna -1
Se str1 > str2, retorna 1
Um exemplo do uso da função seria:

```
int main(){
    char n1[20];
    char n2[20];

    scanf("%s %s", n1, n2);

    if(strcmp(n1, n2) == 0){
        printf("strings iguais\n");
    }
    if(strcmp(n1, n2) == -1){
        printf("primeira menor\n");
    }
    if(strcmp(n1, n2) == 1){
        printf("segunda menor\n");
    }
}

```

O código acima compara as duas strings e consegue dizer se elas são iguais, se a primeira é menor ou se a segunda é menor por meio da função strcmp.

Observe que é comparado o valor lexicográfico das strings, então se inserirmos as strings "aaaaa" e "abcde", que têm o mesmo número de caracteres, nosso código imprime "primeira menor", pois lexicograficamente a primeira string é menor, ou seja, se ordenarmos as duas considerando a ordem alfabética, "aaaaa" viria primeiro.

Caso inserirmos as strings "zz" e "abcde", o código imprime "segunda menor", pois pela ordem lexicográfica, ou seja, se ordenarmos as strings em ordem alfabética, a segunda viria primeiro.

# Função strcat

Função que espera receber duas posições de memória contendo strings e vai concatenar a segunda string na primeira.

Exemplo:

```
char nome[50] = "neps";
strcat(nome, " academy"); //nome = "neps academy"
printf("%s\n", nome); //Imprime "neps academy"
```

# Função strstr

Função que espera receber duas posições de memória contendo strings e retornar a primeira posição de memória da primeira que contém a segunda.

```
char nome[50] = "academy";
printf("%s", strstr(nome, "de") ); //Vai imprimir "demy"
```

No código acima, a função strstr vai procurar pela string "de" na string "academy" e vai retornar a primeira posição de memória onde ela é encontrada, e como estamos mandando imprimir a partir daquela posição, acabamos imprimindo "demy".

Se trocássemos o segundo parâmetro para "c", o programa imprimirá "cademy".

Caso não seja encontrada a string, é retornado um ponteiro nulo. Veja abaixo um exemplo de como podemos utilizar a função para saber se uma string está contida na outra.

```
int main(){
    char n1[20] = "academy";
    if(strstr(n1, "xx") == NULL){
        printf("Nao tem\n");
    }else{
        printf("Tem\n");
    }
}

```