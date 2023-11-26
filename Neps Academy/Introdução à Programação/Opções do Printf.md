# Sumário

- Caracteres especiais
- Alinhamento
- Preenchimento com 0's
- Definir precisão
- Imprimir octais e hexadecimais

# Caracteres especiais

Alguns dos caracteres especiais que podem ser utilizados com o comando printf são a quebra de linha e a tabulação.

Quebra de linha: insere uma nova linha na mensagem a ser impressa. O operador a ser utilizado, como visto em aulas anteriores, é o \n.

Tabulação: insere uma tabulação (popularmente conhecido como tab) na mensagem. O operador a ser utilizado é o \t.

Perceba que, como a barra invertida é usada para indicar um operador de formatação, podemos ter problemas ao tentar imprimi-la de fato. E é o que acontece. A linguagem C, ao ver uma barra invertida no printf, interpreta que em seguida virá um operador. Para contornar esse problema, devemos escrever duas barras invertidas. Observe as diferentes saídas para os seguintes printf's:

```
printf("linguagem\C\n");
/* Saída:
linguagemC

*/
printf("linguagem\\C\n");
/* Saída:
linguagem\C

*/
```

O mesmo acontece com o sinal de porcentagem, que é utilizado para imprimir valores, como visto em aulas passadas:

```
printf("%d %% %d = %d", 10, 7, 10%7);
/* Saída:
10 % 7 = 3
*/
```

# Alinhamento

O alinhamento irá determinar quantos espaços devem ser impressos à direita ou à esquerda de um determinado valor inteiro.

Para esclarecer essa ideia, perceba a diferença de saída entre os seguintes printf's:

```
int a = 123;
printf("[%d]\n", a);
/* Saída:
[123]

*/

// alinhamento à direita:
printf("[%7d]", a);
/* Saída:
[    123]
*/

```

# Preenchimento com 0's

O preenchimento com 0's nada mais é que um alinhamento à direita, com a diferença que os espaços complementares serão substituídos por dígitos 0.

Para isso, basta adicionar um dígito 0 entre o símbolo de porcentagem e o número de espaços desejado.

```
int numero = 456;
printf("%09d", numero);
/* Saída:
000000456
*/
```

# Definir precisão

Para definir a precisão de um número real, utilizaremos o seguinte template:
```
printf("%.[x]f");
```

Este código significa que um determinado float deve ser impresso com uma quantidade x de casas decimais.

Exemplos:

```
float real = 123.58974;
printf("%f\n", real);
printf("%.2f\n", real);
printf("%.3f\n", real);
/*Saída:
123.589737
123.59
123.590

*/
```

Perceba que o computador automaticamente aproxima o valor do número ao imprimi-lo. Portanto, tome cuidado ao utilizar números reais!

# Imprimir octais e hexadecimais

Para imprimir inteiros em suas formas octais, ou base 8, devemos utilizar o especificador "%o" ao invés de "%d".

Exemplos: 

```
printf("%o\n", 9);
printf("%o", 94);
/* Saída:
11
136
*/
```

No caso dos hexadecimais, ou base 16, existem duas formas possíveis:
* Utilizando letras minúsculas: operador "%x", com a letra 'x' minúscula:
```
printf("%x\n", 27);
printf("%x", 430);
/* Saída:
1b
1ae
*/
```
* Utilizando letras maiúsculas: operador "%X", com a letra 'X' maiúscula:
```
printf("%X\n", 27);
printf("%X", 430);
/* Saída:
1B
1AE
*/
```