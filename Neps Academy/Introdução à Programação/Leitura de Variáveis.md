
# Sumário

- Leitura de dados;
- Comando scanf;
- Operador &;
- Formatação;
- Exemplos de leituras.

# Leitura de Dados

A leitura de dados possibilita que o programa armazene informações digitadas pelo usuário. Sem a leitura de dados, um programa seria apenas algo estático, ou seja sempre faria a mesma coisa com os mesmos dados, e através da leitura de dados que conseguimos coletar informações digitadas pelo usuário e fazer o programa trabalhar com base nesses dados. 

Um exemplo da importância da leitura de dados, e você imaginar uma calculadora sem leitura de dados, seria uma calculadora onde você não poderia colocar as suas formulas, sempre calcularia a mesma formula.

# Comando scanf.

Para realização da leitura de dados em C utilizamos o comando scanf (scan + f = ler + função) , ele possibilita que o programa solicite valores para o usuário e atribua esses valores para variáveis. No comando scanf, devemos informar a formatação que queremos ler e as posições de memória que vamos guardar os valores.

```
scanf(<formatação>,<posições de memória>);
```

# Operador &

No scanf, devemos informar as posições de memória que queremos guardar as informações. Quando escrevemos & antes de uma variável, o C entende que queremos a posição de memória da variável, então sempre que colocarmos uma variável no scanf, temos que colocar o & antes dela, para especificar que queremos que o computador armazene informação na mesma posição de memoria que ela está ocupando.

# Formatação

A formatação utilizada e semelhante ao printf, utilizando %<tipo> para especificar que queremos ler um valor de um determinado tipo:

Especificador	Tipo
%d ou %i    	int
%f          	float
%c	            char

# Exemplos de leituras

```
#include <stdio.h>

int main(){
    int a, b;
    scanf("%d",&a);
    printf("Valor da variavel a = %d\n",a);
}

```

```
int main(){
    float a, b;
    scanf("%f%f", &a, &b);
    printf("Soma = %f\n", a+b);

    return 0;
}
```