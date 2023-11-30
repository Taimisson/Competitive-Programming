# Modularização

- O que é modularizar?
- Por que modularizar?
- O que é uma função?
- Funções em C
- Codificação

# O que é modularizar?

Modularizar significa dividir seu programa em módulos.

Cada módulo irá executar uma tarefa específica.

Até agora, todos os nossos programas foram executados em um único módulo: a função main, ou função principal, que continha tudo o que queríamos executar.

# Por que modularizar?

Modularizar um programa faz com que o programador tenha que programar pequenas tarefas de cada vez. Isso irá:

Facilitar o debug do código;
- Melhorar a legibilidade do código; e
- Eliminar redundância de código.
- Se você ainda não sabe o que esses conceitos significam, aqui está uma breve descrição de cada um deles:

    - Debug : processo de localizar e reduzir erros no código. Dessa forma, é mais fácil encontrar e corrigir erros em um código modularizado em pequenas tarefas do que em um código não repartido.

    - Legibilidade: facilidade de entender o que o código está fazendo. Tendo isso em vista, é mais fácil compreender a funcionalidade de um código modularizado em pequenas tarefas do que de um código não repartido.

    - Redundância: utilizar o mesmo trecho de código mais de uma vez no mesmo programa. Em um código modularizado, você poderia chamar inúmeras vezes a mesma tarefa, sem ter que reescrevê-la.

# O que é uma função?

Para modularizar um programa, vamos dividi-lo em funções.

Uma função é, de maneira resumida, um bloco de código que recebe determinados parâmetros, realiza o processamento deles e retorna algum valor.

Exemplos:

- f(x)=2∗x
- f(x,y)=x+y

# Funções em C 

Para criar uma função em C, devemos especificar:

- Tipo de retorno: o tipo de dado que a função irá retornar;

- Nome: o nome que vamos usar para chamar a função;

- Parâmetros: os dados que a função precisa para funcionar;

- Código: código da função.

A criação de uma função em C segue o template abaixo:
```
<tipo de retorno> <nome> ( <parametros> ){
    <codigo>
}
```
Observação: os parâmetros devem ter seus tipos identificados e, se forem mais de um, estarem separados por vírgulas.

# Codificação

Segue abaixo um código que define e utiliza uma função sem parâmetros que apenas imprime uma frase:

```
#include <stdio.h>

/*
    Tipo de retorno: inteiro
    Nome: imprime
    Parametros: nenhum
    Codigo: apenas um printf
*/

int imprime(){
    printf("Neps Academy\n");
}

int main(){
    /* chama a funçao "imprime", fornecendo os parametros necessarios
    para ela dentro dos parenteses(que, no caso, nao possui nenhum)
    */
    imprime();
}
/* Saída:
Neps Academy

*/
```
Com a função criada, podíamos chamá-la quantas vezes quiséssemos dentro da main, e a frase "Neps Academy" seria impressa tantas vezes quanto o número de chamadas da função.