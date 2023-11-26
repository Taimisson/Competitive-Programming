# Sumário

- Exemplo de problema
- Operador lógico de negação
- Estrutura if-else

# Exemplo de problema

Um aluno tem média x, e gostaria de saber se está aprovado ou não.

Considere que um aluno está aprovado se sua média for maior ou igual à 7, e que está reprovado caso contrário.

Para resolver este problema, temos as seguintes 3 opções:

Fazer dois if's: um checando se a média é maior ou igual à 7 e outro checando se ela é menor que 7.

```
if( x >= 7 ){ // checa se x eh maior ou igual a 7
    printf("Aprovado!\n");
}

if( x < 7 ){ // checa se x eh menor que 7
    printf("Reprovado!\n");
}
```

- Fazer dois if's: um checando se a média é maior ou igual à 7 e outro checando se ela não é maior ou igual à 7.
- Utilizar a estrutura if-else.

# Operador lógico de negação

Para utilizar a segunda opção apresentada, precisaremos aprender o que é e como utilizar o operador lógico de negação.

Este operador pode ser utilizado para perguntar se uma condição é falsa em vez de verdadeira. Em outras palavras, ele irá inverter o valor da afirmação.

Em C, o operador lógico de negação é representado por um ponto de exclamação("!"), e deve vir antes da afirmação a ser analisada, seguindo o template abaixo:

```
if( !  condicao ){ // checa se a condicao eh falsa
    
}
```
Dessa forma, para resolver o exercício apresentado acima pelo segundo método, teremos o seguinte código:
```
if( x >= 7 ){ // checa se x eh maior ou igual a 7
    printf("Aprovado!\n");
}

if( !( x >= 7 ) ){ // checa se x nao eh maior ou igual a 7
    printf("Reprovado!\n");
}
```

Observação: perceba que a afirmação precedida pelo operador lógico de negação foi envolvida por parênteses. Se não tivéssemos feito isso, então o valor lógico de x seria invertido(se x fosse diferente de zero, então de verdadeiro ele passaria a ser falso, e vice-versa) e nosso código não funcionaria.

# Estrutura if-else

Para utilizar a terceira opção apresentada, precisaremos aprender o que é e como utilizar a estrutura if-else.

É uma estrutura que especifica um passo a passo caso uma condição seja verdadeira e outro passo a passo caso ela seja falsa.

Essa estrutura segue o template abaixo:

```
if( condicao ){
    // Verdadeira
}
else{
    // Falsa
}
```

Na estrutura acima, o bloco de código contido dentro do if será executado apenas se a condição for verdadeira. Enquanto isso, o bloco de código contido dentro do else será executado apenas se a condição analisada pelo if for falsa.

Assim sendo, podemos ler o código acima da seguinte forma: "Se esta condição for verdadeira, execute isto. Caso contrário, execute isto."

Perceba que, da mesma forma que if significa "se" em inglês, else significa "senão" e, portanto, deve sempre vir precedido por um comando if.

Dessa forma, para resolver o exercício apresentado acima pelo terceiro método, teremos o seguinte código:

```
if( x >= 7 ){ // checa se x eh maior ou igual a 7
    printf("Aprovado!\n");
}

else{ // caso a condicao acima seja falsa
    printf("Reprovado!\n");
}
```

