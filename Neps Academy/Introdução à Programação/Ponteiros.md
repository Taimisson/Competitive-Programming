# Sumário

- O que é um ponteiro?
- Aritmética de ponteiro
- Tamanho de tipos
- Como alterar o conteúdo de um ponteiro?
- Como acessar o conteúdo "apontado" por um ponteiro?

# O que é um ponteiro?

Ponteiro é uma variável que tem acesso à uma posição de memória.

O valor do ponteiro é uma posição de memória. Isto é, ele armazena o endereço de uma determinada posição da memória.

Dessa forma, um ponteiro "aponta" para uma determinada posição da memória.

A declaração de um ponteiro segue o template abaixo:

```
<tipo> *<nome>;
```

Na declaração de um ponteiro, o tipo representa qual tipo de dado está sendo armazenado na posição de memória guardada pelo ponteiro. Ou seja, se uma determinada posição de memória é usada para armazenar inteiros, então um ponteiro que guardará o endereço dessa posição deverá ser do tipo int.

Exemplos:

```
int *p;
float *f;
```

# Aritmética de ponteiro

Ao tentar somar ou subtrair valores de um ponteiro, o endereço de memória ao qual ele "aponta" será alterado.

Ou seja, se somarmos 1 a um ponteiro que "aponta" para um inteiro, então ele passará a apontar para a próxima região de memória.

# Tamanho de tipos

A linguagem C possui um operador unário que retorna o tamanho em bytes de algo (a quantidade de memória ocupada por um dado específico, por exemplo): o sizeof.

Exemplos:

- sizeof(int) = 4
- sizeof(float) = 4
- sizeof(double) = 8
- sizeof(char) = 1

Os valores acima indicam que, por exemplo, um inteiro ocupa 4 bytes de memória ao ser armazenado.

Dessa forma, se adicionarmos 1 a um ponteiro que aponta para um inteiro, então o novo endereço de memória "apontado" por ele estará 4 bytes à frente do antigo.

# Como alterar o conteúdo de um ponteiro?

Assim como é possível atribuir valores para variáveis comuns, também é possível atribuir um endereço de memória à um ponteiro.

Para isso, podemos utilizar o operador "&" para descobrir o endereço de uma variável na memória, e atribuí-lo a um ponteiro. Para facilitar seu entendimento, observe o exemplo abaixo:

```
int x = 5; // crio a variavel inteira x e atribuo o valor 5 a ela

int *p = &x; // crio o ponteiro inteiro p e atribuo o endereco de x a ela

int y = 9; // crio a variavel inteira y e atribuo o valor 9 a ela

p = &y; // atribuo o endereco de y ao ponteiro p
```

# Como acessar o conteúdo "apontado" por um ponteiro?

Agora que já vimos como alterar o endereço de memória apontado por um ponteiro, precisamos aprender como acessar o conteúdo armazenado nesse endereço.

Se apenas utilizarmos um comando printf da forma que estamos acostumados a ver, teremos uma saída inesperada:

```
#include <stdio.h>

int main(){
    int x = 5;

    int *p = &x;

    printf("%d\n", p);
}
/* Saída:
6422296

*/
```

Como você deve ter percebido, o valor impresso não é o mesmo armazenado na variável x. Isso porque o conteúdo do nosso ponteiro não é 5, mas o endereço de memória de x.

Dessa forma, sabemos que a variável x foi armazenada no endereço de memória 6422296 do meu computador.

Observação: este foi o endereço que o meu computador utilizou para armazenar a variável x. Então não se assuste se o resultado for totalmente diferente no seu.

Ok, mas como acessar o valor da variável x pelo ponteiro então?

Para isso, devemos apenas adicionar um asterisco antes do nome do ponteiro:

```
#include <stdio.h>

int main(){
    int x = 5;

    int *p = &x;

    printf("%d\n", *p);
}
/* Saída:
5

*/
```

Dessa forma, estamos indiretamente acessando a variável X.

E isso não serve apenas para o printf : podemos utilizar essas mesmas operações para, por exemplo, pegar o endereço de um ponteiro e atribuir a outro, ou pegar o conteúdo de uma variável apontada por um ponteiro e atribuir a outra variável... as possibilidades são inúmeras.

```
#include <stdio.h>

int main(){
    int var = 123;

    int *ponteiro = &var;

    printf("%d\n", *ponteiro);

    *ponteiro = 789;

    printf("%d\n", var);
}
/* Saída:
123
789

*/
```

No código acima, o primeiro printf imprime o valor armazenado no endereço de memória "apontado" pelo nosso ponteiro, ou seja, o valor de var.

Após isso, o valor armazenado no endereço de memória apontado pelo nosso ponteiro, o conteúdo da variável var, é alterado para 789

```
#include <stdio.h>

int main(){
    printf("Tamanho de um inteiro: %d\n\n", sizeof(int));

    int x = 1;

    int *p = &x;

    printf("p aponta para %d\n", p);
    printf("p+1 aponta para %d\n", p+1);
    printf("p+2 aponta para %d\n", p+2);
}
/* Saída:
Tamanho de um inteiro: 4

p aponta para 6422296
p+1 aponta para 6422300
p+2 aponta para 6422304

*/
```

Perceba que, no código acima, ao adicionar uma unidade ao endereço armazenado pelo ponteiro 
�
p, o deslocamento da posição da memória foi exatamente de 4 bytes, nas duas vezes. Isso porque o ponteiro é do tipo inteiro e, como podemos ver na saída do próprio programa, um inteiro ocupa 4 bytes de memória.