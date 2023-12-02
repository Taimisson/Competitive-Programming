# Sumário

- O que é o escopo de uma variável?
- Escopo local
- Escopo global
- Prioridade

# O que é o escopo de uma variável?

O escopo de uma variável representa os limites dentro dos quais uma variável está definida.

Isso significa que uma variável pode estar definida em um trecho do código e não estar definida em outro trecho.

# Escopo local

Para facilitar a explicação, analise o seguinte código:

```
#include <stdio.h>

int aux(){
    int a = 9;
    int b = 123;
}

int main(){
    int a = 4;
}
```

Perceba que, no código acima, a declaração de a foi feita duas vezes. No entanto, essas duas declarações não referem-se à mesma variável.

Ao declarar a com valor 9 dentro de aux, teremos que essa variável com esse valor só existe e pode ser acessada dentro dessa função. Isto é, seu escopo é local na função aux. O mesmo ocorre para a variável b.

Da mesma forma, a variável a de valor 4 declarada na main só existe e pode ser acessada dentro dessa função.

Tendo isso em vista, analise a saída do código abaixo:

```
#include <stdio.h>

int aux(){
    int a = 9;

    int b = 123;
    
    // imprime os valores das variaveis a e b contidas na funcao aux
    printf("aux -> %d %d\n", a, b);
}

int main(){
    int a = 4;
    
    // imprime o valor da variavel a contida na funcao main
    printf("Main -> %d\n", a);

    // chama a funcao aux
    aux();
}
/* Saída:
Main -> 4
aux -> 9 123

*/
```

# Observações:

Se, no código acima, tivéssemos tentado acessar a variável b dentro da função main, o Code::Blocks iria nos alertar, avisando que b não foi declarado.

Estruturas if, else, while, dentre outras, também apresentam escopo local. Ou seja, uma variável declarada dentro de um loop while só existe e pode ser acessada dentro dessa estrutura.

Tendo aprendido isso, podemos entender o que são os parâmetros das funções.

Os parâmetros que são passados para uma função representam variáveis locais que devem ser inicializadas logo na chamada desta função.

Para facilitar o entendimento, analise o código abaixo:

```
#include <stdio.h>

int soma(int a, int b){
    return a+b;
}

int main(){
    printf("%d\n", soma(2, 5));
}
/* Saída:
7

*/
```

No código acima, as variáveis a e b são locais e recebem valores assim que a função é chamada.

Portanto, ao chamar a função, devemos incluir seus parâmetros, pois ela necessita deles. Caso não os informemos, o Code::Blocks nos alertará com um erro.

# Escopo global

Variáveis de escopo global existem e podem ser acessadas em qualquer trecho do programa.

Estas variáveis devem ser declaradas fora de qualquer função.

Exemplo:

```
#include <stdio.h>

int global = 1; // declaracao da variavel global com valor 1

int aux(){
    printf("%d\n", global); // imprime o valor da variavel global
    
    global = 3; // altera o valor da variavel global para 3
}

int main(){
    printf("%d\n", global); // imprime o valor da variavel global
    
    global = 2; // altera o valor da variavel global para 2
    
    aux(); // chama a funcao aux
    
    printf("%d\n", global); // imprime o valor da variavel global
}
/* Saída:
1
2
3
*/
```

# Prioridade

Em C, variáveis locais têm maior prioridade que as globais.

Para facilitar o entendimento, analise o código abaixo:

```
#include <stdio.h>

int var = 7;

int aux(){
    int var = 9;
    printf("%d\n", var);
}

int main(){
    printf("%d\n", var);

    aux();

    printf("%d\n", var);
}
/* Saída:
7
9
7

*/
```

No código acima, tivemos a declaração da variável var tanto no escopo global quanto no escopo local da função aux.

Ao executar o primeiro comando printf da main, o programa imprimiu o valor 7, que está contido na variável global var, a única que essa função tem acesso.

Ao chamar a função aux, uma variável local var é declarada com valor 7. Em seguida, o comando printf imprime esse mesmo valor, pois a variável local var tem preferência em relação à global de mesmo nome.

Ao voltar para a main, o segundo comando printf é executado e imprime o valor 7 novamente. Isso ocorre porque a função aux não alterou o valor da variável global, mas criou uma local e atribuiu um outro valor a ela.

Observação: perceba que se não tivéssemos incluído o tipo (int) antes do nome var na função aux, não estaríamos declarando uma nova variável, mas alterando o valor da já existente:

```
#include <stdio.h>

int var = 7;

int aux(){
    var = 9;
    printf("%d\n", var);
}

int main(){
    printf("%d\n", var);

    aux();

    printf("%d\n", var);
}
/* Saída:
7
9
9

*/
```