# Sumário

- Sistema de numeração;
- Sistema posicional;
- Conversão para decimal;
- Conversão de decimal para binário;
- Representação interna.

# Sistema de Numeração

Um sistema de numeração serve para representar quantidades. O sistema de numeração mais utilizado por nós é o decimal, mas um computador utiliza o sistema binário.

Na base decimal os números são representados utilizando 10 caracteres: 1, 2, 3, 4, 5, 6, 7, 8, 9 e 0. Já na base binária, utilizamos apenas 2 caracteres: 0 e 1.

O que difere um sistema de numeração de outro é a quantidade de caracteres utilizadas para representar os números.

Apesar do sistema decimal ser o mais utilizado por nós, existem outros tipos de sistema de numeração. Utilizamos a palavra base para nos referirmos a um sistema. Por exemplo:

- Decimal (base 10)
- Binário (base 2)
- Octal (base 8)
- Hexadecimal (base 16)

No sistema hexadecimal em específico, representamos com os caracteres de 0 até 9, depois utilizamos letras de A até F. No caso, o A valeria 10, o B valeria 11 e assim por diante.

# Sistema Posicional

Para calcular a quantidade de um certo sistema de numeração, é utilizado o sistema posicional, em que cada caractere tem um valor relacionado com a posição em que ele está.

Por exemplo, no sistema decimal o primeiro dígito de um número é a unidade, o segundo é dezena,o terceiro é a centena e assim por diante, o que é relacionado com o sistema de numeração.

- 5356 = 6 x 10 + 5 x 10 + 3 x 10 + 5 x 10

Cada número tem o valor igual à primeira posição multiplicada por quantos caracteres estão sendo utilizados elevado a zero, mais a segunda posição multiplicada por quantos caracteres estão sendo utilizados elevado a um e assim por diante.

# Conversão para o sistema decimal

Podemos utilizar a ideia do sistema posicional para calcular o valor em qualquer outra base, ou seja, em qualquer outro sistema de numeração.

# Conversão do sistema decimal para binário

Para converter um número X na base decimal para a base binária, basta guardar os restos das divisões de X por 2, depois dividir X por 2 até que X fiquei igual a 0.

Exemplo: Converter 46 para binário.
- 46%2=0, 46/2=23
- 23%2=1, 23/2=11
- 11%2=1, 11/2=5
- 5%2=1, 5/2=2
- 2%2=0, 2/2=1
- 1%2=1, 1/2=0

Resposta: 101110

É importante lembrar que símbolo da porcentagem (%) na programação é utilizado para representar a operação de módulo, ou seja, resto da divisão.

Alguns outros exemplos de conversão de decimal para binário são:

- O valor de 10 em binário é 1010.
- O valor de 64 em binário é 1000000.
- O valor de 63 em binário é 111111.
- O valor de 55 em binário é 110111.
- O valor de 39 em binário é 100111.

Novamente, sugiro que tente fazer o processo de conversão para praticar. 😉

# Representação interna

A memória do computador é formada por um conjunto de bits. Um bit é um espaço de memória em que só pode ser armazenado um tipo de informação. Cada bit só consegue armazenar verdadeiro (1) ou falso (0).

Podemos concluir então que toda informação armazenada no computador não passa de um conjunto de zeros e uns. Por isso, o computador utiliza vários métodos para resgatar as informações guardadas como zeros e uns e converter em informações apresentáveis para o usuário.