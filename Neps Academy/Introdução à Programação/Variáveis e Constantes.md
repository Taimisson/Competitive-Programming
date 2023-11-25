# Sumário 

- O que é uma variável?
- Como alterar o valor de uma variável?
- Exemplo de atribuição
- Tipos de variáveis
- Declaração de variáveis
- Regras de nomenclatura
- Constantes
- Como imprimir um valor

# O que é uma variável?

Uma variável é um identificador que permite acessar determinada região de memória do computador.

Em outras palavras, uma variável é um nome capaz de armazenar um valor. Na prática, este nome fará referência a uma parte específica da memória, que armazenará um valor.

# Como alterar o valor de uma variável?

Basicamente, existem dois métodos para alterar o valor de uma variável no programa:

- Leitura: o usuário digitará o valor que a variável irá receber.
- Atribuição: o programador especifica o valor que a variável deve receber.

# Tipos de variáveis

Em C, para se utilizar uma variável, antes deve-se especificar qual tipo de dado ela armazenará.

Isto significa que C é uma linguagem tipada.

Exemplos de tipos:

- Inteiro - int
- Real - float ou double
- Caractere - char

# Declaração de variáveis

Para declarar uma variável em C, utilizaremos o seguinte template:

```
 <tipo> <nome>;
```
Ou também podemos declarar várias variáveis do mesmo tipo numa mesma linha, separando os nomes por vírgulas, da seguinte forma:
```
 <tipo> <nome1>, <nome2>;
```
Alguns tipos básicos são: int, float e char.

Os nomes serão os nomes das variáveis.

Na declaração, o tipo e o nome não devem estar dentro dos caracteres "<>".

Exemplo:

int variavelInteira;

# Regras de nomenclatura

Os nomes de variáveis:

- devem conter apenas letras(sem acentos), números e sublinhados("_");
- não podem começar com um número; e
- não pode ser igual a uma palavra reservada(palavras que já possuem um significado dentro da linguagem C).

Observação: há diferenciação entre letras minúsculas e maiúsculas, isto é, os nomes variavel e VaRiAvEl corresponderiam a variáveis diferentes.

# Constantes

Constantes, assim como variáveis, também são nomes que referem-se a regiões de memória.

Porém, as constantes só admitem um valor durante todo o programa.

Na declaração de uma constante, seu valor já deve ser especificado.

Uma constante pode ser declarada das duas formas seguintes:

```
const <tipo> <nome> = <valor>;
<tipo> const <nome> = <valor>;
```

Exemplos:

```
const int constante = 123;
int const Neps = 789, Academy = 5;
```

# Como imprimir um valor

Para imprimir o valor de uma variável ou constante, continuaremos utilizando o comando printf.

Se utilizarmos um %< tipo> dentro do corpo da mensagem, estaremos especificando que vamos imprimir um valor no lugar. Em seguida, devemos especificar, fora do corpo da mensagem, qual valor deve ser impresso.

Os especificadores de tipo seguem a tabela abaixo:

Especificador	Tipo
%d ou %i	    int
%f	            float
%c	            char

```
 printf("x = %d\n", 4);
 int nota;
 nota = 10;
 printf("O Neps Academy eh nota %d!\n", nota);
```

A linha 1 imprimirá a frase "x = 4", seguido de uma quebra de linha.

A linha 4 imprimirá a frase "O Neps Academy eh nota 10!", seguido de uma quebra de linha.