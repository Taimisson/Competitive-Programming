# Sumário

- Função soma de int
- Função soma de float
- Função menor de int
- Função média de float

# Função soma de int
Neste tópico, iremos criar uma função que nos forneça a soma de dois inteiros.

```
#include <stdio.h>

/*
    Tipo de retorno: int -> pois a soma de dois inteiros eh um inteiro
    Nome: soma
    Parametros: int a, int b -> as duas parcelas da nossa soma
    Codigo: a + b
*/

int soma(int a, int b){
    int s = a + b;
    return s;
}

int main(){
    int x = soma(2, 3); // x recebe o valor retornado pela funcao soma com os parametros 2 e 3

    printf("%d\n", x);
}
/* Saída:
5

*/
```

Na nossa função "soma", declarada no código acima, temos o comando return. Esse comando indica que a função deve retornar um determinado valor que, nesse caso, é a variável "s". Assim que o comando return é executado, a função retorna o valor e é encerrada. Portanto, qualquer código que esteja após o return não será executado(caso o comando de retorno tenha sido executado antes).

Portanto, nosso programa irá iniciar na função main e atribuirá o valor de "soma(2, 3)" a x. A função, ao ser chamada, irá retornar 5, que é a soma de 2 e 3. Após isso, a função é encerrada e o programa volta para a main. Em seguida, o comando printf é executado, imprimindo 5, e nosso programa chega ao fim.

# Função soma de float

Neste tópico, iremos criar uma função que nos forneça a soma de dois floats.

```#include <stdio.h>

/*
    Tipo de retorno: float -> pois a soma de dois reais eh um real
    Nome: soma
    Parametros: float a, float b -> as duas parcelas da nossa soma
    Codigo: a + b
*/

float soma(float a, float b){
    float s = a + b;
    return s;
}

int main(){
    float x, y;

    scanf("%f %f", &x, &y);

    printf("%.1f\n", soma(x, y));
}
```

Nosso código acima define uma função "soma" que recebe dois números reais e retorna a soma deles, que também é um número real.

Na função main, são lidos dois números reais x e y. Após isso, o comando printf irá imprimir um valor do tipo float, com apenas 1 casa decimal. Este valor será aquele retornado pela função "soma", tendo x e y como parâmetros.

# Função menor de int

Neste tópico, iremos criar uma função que nos forneça o menor dentre dois inteiros.

```
#include <stdio.h>

/*
    Tipo de retorno: int -> pois o menor dentre dois inteiros eh um inteiro
    Nome: menor
    Parametros: int a, int b -> os dois inteiros a serem analisados
    Codigo: uma estrutura if-else
*/

int menor(int a, int b){
    if(a < b){ // checa se a eh menor que b
        return a;
    }

    else{ // caso contrario
        return b;
    }
}

int main(){
    int x, y;

    scanf("%d %d", &x, &y);

    printf("%d\n", menor(x, y));
}
```

Perceba que no código acima, diferentemente do que foi visto até agora, há dois comandos return.

Quando a função é chamada, será analisado se o valor de a é menor que o de b. Caso isso aconteça, o valor de a será retornado e a função será interrompida. Logo, qualquer código restante na função será ignorado.

Porém, se a não for menor que b, então o primeiro return não será executado. Logo, a função continuará a ser operada e o segundo return será executado, retornando o valor de b.

Perceba também que, se o valor de a for igual ao de b, o primeiro return não será executado, mas o segundo sim. Isso porque a afirmação a < b é falsa.

# Função média de float

Neste tópico, iremos criar uma função que nos forneça a média entre dois números reais.

```#include <stdio.h>

float media(float a, float b){
    return (a+b)/2.0;
}

int main(){
    float x, y;

    scanf("%f %f", &x, &y);

    printf("%.2f\n", media(x, y));
}
```

Como incentivo, tente interpretar sozinho o funcionamento do código acima. Após isso, use sua criatividade para criar suas próprias funções, utilizando todos os conhecimentos adquiridos até agora.
