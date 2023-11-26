# Sumário

- Exemplo de probema
- Estrutura if-else-if

# Exemplo de problema

Um aluno tem média x, e gostaria de saber se está aprovado, reprovado ou de avaliação final.

Considere que um aluno está aprovado se sua média for maior ou igual à 7, reprovado se sua média for menor que 4 e de avaliação final se não estiver nem aprovado nem reprovado.

Para resolver este problema, temos as seguintes 2 opções:
- Fazer três if's: um perguntando a média é maior ou igual à 7, outro perguntando se ela é menor que 4 e outro perguntando se ela é menor que 7 e maior ou igual à 4.

```
if( x >= 7 ){ // checa se x eh maior ou igual a 7
    printf("Aprovado!\n");
}

if( x < 4 ){ // checa se x eh menor que 4
    printf("Reprovado!\n");
}

if( x < 7 && x >= 4 ){ // checa se x eh menor que 7 e maior ou igual a 4
    printf("Avaliacao final!\n");
}
```

- Utilizar a estrutura if-else-if.

# Estrutura if-else-if

Para utilizar a segunda opção apresentada, precisaremos aprender o que é e como utilizar a estrutura if-else-if.

É uma estrutura que especifica um passo a passo caso uma condição seja verdadeira e outro passo a passo caso a primeira condição seja falsa e uma segunda condição seja verdadeira.

Essa estrutura segue o template abaixo:

```
if( x >= 7){ // checa se x eh maior ou igual a  7
    printf("Aprovado!\n");
}

else if( x < 4 ){ // caso a condicao acima seja falsa, testa se x eh menor que 4
    printf("Reprovado!\n");
}

else{ // caso todas as condicoes acima sejam falsas
    printf("Avaliacao final!\n");
}
```

