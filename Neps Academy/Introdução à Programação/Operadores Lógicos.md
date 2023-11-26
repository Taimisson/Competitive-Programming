# Sumário

- Operador E
- Operador OU
- Precedência
- Parênteses

# Operador E

Imagine o seguinte problema: como descobrir se um número inteiro é par e positivo?

Para resolver este problema, primeiro precisamos saber quais são as condições necessárias para que um inteiro x seja par e positivo:

Par: x % 2 == 0
Positivo: x > 0

Sabendo essas condições, podemos prosseguir com duas abordagens:

```
if( x % 2 == 0 ){ // checa se x eh par
    if( x > 0){ // se x for par, entao checa se ele eh positivo
        printf("Par e positivo!\n"); // se x for par e positivo, executa o printf
    }
}
```
Este operador é representado pela junção de dois e-comerciais (&&) e apenas terá valor verdadeiro se as duas afirmações a serem analisadas forem verdadeiras. Sua sintaxe é a seguinte:
```
if( x % 2 == 0 && x > 0 ){
    printf("Par e positivo!\n");
}
```

# Operador OU 

Agora, imagine outro problema: como descobrir se um número é par ou positivo?

Neste caso, temos novamente duas abordagens:

- Fazer dois if's.
```
if( x % 2 == 0 ){ // checa se x eh par
    printf("Par ou positivo!\n"); // se x for par, executa o printf
}

if( x > 0){ // checa se x eh positivo
    printf("Par ou positivo\n"); // se x for positivo, executa o printf
}
```
- Fazer apenas um if utilizando o operador lógico OU.

```
if( x % 2 == 0 || x > 0 ){
    printf("Par ou positivo!\n");
}
```

Dessa forma, a condição analisada pelo if será verdadeira se ao menos uma das duas afirmações (par ou positivo) for verdadeira. Isto é, se o número for par, ou positivo, ou par e positivo.

# Precedência

Em operações onde vários operadores lógicos são utilizados, tem-se que os operadores E são verificados antes dos operadores OU. Para facilitar o entendimento, analise este exemplo:

```
// falso  falso verdadeiro
if( 2<1 && 2<0 || 1<2 ){
    printf("Entrou no IF\n");
}
/* Saída: 
Entrou no IF

*/
```
# Parênteses

Assim como nos operadores aritméticos, podemos utilizar parênteses para alterar a ordem de execução dos operadores.

Dessa forma, se o código acima for escrito da seguinte forma, teremos um resultado completamente diferente:

```
if(2<1 && (2<0 || 1<2) ){
    printf("Entrou no IF\n");
}
/* Saída: 

*/
```

Perceba que, ao analisar primeiramente o OU, obteremos valor verdadeiro, pois sua segunda afirmação é verdadeira. Após isso, o operador E será analisado e resultará em falso, pois, por mais que sua segunda afirmação seja verdadeira, a primeira é falsa. Portanto, o printf dentro do if não será executado e nada será impresso na tela.

