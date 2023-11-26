# Sumário

- O que é?
- Para que serve?
- Comentário de uma linha.
- Comentário de múltiplas linhas.

# O que é

Podemos adicionar um texto ao código pára explicar seu funcionamento e também auxiliar alguém que irá ler aquele código pela primeira vez. Esses textos não afetam a execução do programa e são conhecidos como comentários.

# Para que serve?

Cometários são uma ótima forma de explicar o funcionamento de um código, com comentários e possível entender o que uma parte de um código ou um código todo realiza, sem ler o código em si, alem de ser muito útil, para relembrar o funcionamento de certas partes.

# Comentário de uma linha.

De forma resumida o código acima recebe dois valores A e B, e imprime a soma deles. Mas como eu posso explicar o funcionamento de cada linha do código?? Utilizando comentários para explicar cada parte. O comentário de uma linha consistem em adicionar // na linha e tudo após o // não sera considerado na hora da compilação e não afetara o funcionamento do programa.

```
#include <stdio.h>
// Exemplo de comentário
int main(){
    int   a,b; //Declaro minhas variáveis a e b. 

    scanf("%d%d", &a, &b); //Leio dois valores

    printf("soma = %d\n", a+b); //Imprimo a soma de a+b
}
```

# Comentário de múltiplas linhas.

```
#include <stdio.h>
/*
    Programa - Comentários
    Esse e um programa exemplo para 
    o funcionamento de comentários.
*/
int main(){
    int   a,b; //Declaro minhas variáveis a e b. 

    scanf("%d%d", &a, &b); //Leio dois valores

    printf("soma = %d\n", a+b);  //Imprimo a soma de a+b
}

```