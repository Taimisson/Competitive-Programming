# Sumário

- Ponteiro como parâmetro
- Codificação (exemplos e utilidade)

# Ponteiro como parâmetro

Para utilizar ponteiros como parâmetros, basta colocar um asterisco antes do nome da variável, como na declaração normal de um ponteiro.

Exemplo:

```
int funcao(int *p){
    // Codigo
}
```

Quando utilizamos um ponteiro como parâmetro de uma função, dizemos que essa é uma passagem por referência, pois o ponteiro não está armazenando o valor propriamente, mas "apontando" para ele.

# Codificação (exemplos e utilidade)

Perceba a diferença entre os dois códigos abaixo:
Código 1:

```
#include <stdio.h>

int troca(int a, int b){
    int aux = a;

    a = b;

    b = aux;

    printf("troca -> a = %d e b = %d\n", a, b);
}

int main(){
    int a = 1;

    int b = 2;

    printf("main -> a = %d e b = %d\n", a, b);

    troca(a, b);

    printf("main -> a = %d e b = %d\n", a, b);
}
/* Saída:
main -> a = 1 e b = 2
troca -> a = 2 e b = 1
main -> a = 1 e b = 2

*/
```

Código2:

```
#include <stdio.h>

int troca(int *a, int *b){
    int aux = *a;

    *a = *b;

    *b = aux;

    printf("troca -> a = %d e b = %d\n", *a, *b);
}

int main(){
    int a = 1;

    int b = 2;

    printf("main -> a = %d e b = %d\n", a, b);

    troca(&a, &b);

    printf("main -> a = %d e b = %d\n", a, b);
}
/* Saída:
main -> a = 1 e b = 2
troca -> a = 2 e b = 1
main -> a = 2 e b = 1

*/
```

Perceba que, no código 1, como as variáveis a e b usadas na função troca são locais, a operação de troca não tem efeito na função main.

No código 2, porém, como passamos o endereço das nossas variáveis a e b, a operação de troca apresenta efeito tanto dentro da função troca quanto na main, pois as variáveis de mesmo nome de ambas funções possuem o mesmo endereço de memória, isto é, são as mesmas.

# Observações:

Passar o endereço das variáveis na chamada da função tem o mesmo efeito que criar um ponteiro para cada variável e usá-los como parâmetros na chamada.

Se o parâmetro de uma função for um ponteiro, sua chamada deve conter um endereço ou um ponteiro. Caso contrário, o compilador irá alertar um erro, mesmo que o ponteiro e o valor passado sejam do mesmo tipo.

Ok, mas quais as vantagens de utilizar a passagem por referência?

Caso você crie uma função que deva ter efeito na variável original, e não somente nas cópias criadas pela função, utilizar a passagem por referência é muito mais simples e fácil do que criar um mecanismo que pegue os valores de variáveis utilizadas numa função e os atribua a outras variáveis de outras funções. Também é menos arriscado que utilizar variáveis globais.