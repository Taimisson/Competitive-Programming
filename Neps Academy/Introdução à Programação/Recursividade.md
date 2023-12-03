# Sumário

- O que é recursividade? Para que serve?
- Como montar uma função recursiva?
- Exemplo: fatorial

# O que é recursividade? Para que serve?

A recursividade ocorre quando uma função chama ela mesma.

Isso serve para um programador abstrair melhor certos problemas.

Normalmente, códigos recursivos são menores e mais fáceis de entender do que códigos não recursivos.

# Como montar uma função recursiva?

Para montar uma função recursiva, temos que definir duas coisas principais:
- Casos base: valores para os quais a resposta é conhecida.
- Recursão: qual passo fazemos para encontrar a resposta a partir de valores que não se conhece a resposta.

Para entender melhor o que tudo isso quer dizer, acompanhe o exemplo de uma função fatorial.

Exemplo: fatorial
Temos que o fatorial de um número inteiro não negativo N é:

- Se N=0, N!=1;
- Se N!=N∗(N−1)!

Assim, podemos observar a base e o passo de uma função que calcula o fatorial de um número recursivamente:

- Caso base: quando N=0, pois o resposta é conhecida.
- Recursão: quando N>0, pois o resposta depende do resultado da mesma função, só que para outro valor.

Tendo isso em vista, podemos criar nossa função fatorial da seguinte maneira:

```
#include <stdio.h>

int f(int x){ // funcao fatorial
    if(x == 0){ // caso base
        return 1;
    }
    else{ // recursao
        return x * f(x-1);
    }
}

int main(){
    int N;

    scanf("%d", &N);

    printf("O fatorial de %d eh %d\n", N, f(N));
}
```

Para facilitar a análise da função f acima, vamos tentar interpretá-la para o valor 5:

f(5)=5∗f(4)
f(4)=4∗f(3)
f(3)=3∗f(2)
f(2)=2∗f(1)
f(1)=1∗f(0)
f(0)=1

Ao chegar no caso base, nossa função irá voltar completando as lacunas:

f(1)=1∗f(0)=1∗1=1
f(2)=2∗f(1)=2∗1=2
f(3)=3∗f(2)=3∗2=6
f(4)=4∗f(3)=4∗6=24
f(5)=5∗f(4)=5∗24=120

Se você analisou atentamente o fatorial de 5, deve ter percebido que o papel do caso base é impedir que a função se chame infinitamente. Isso pois, se nossa função não tivesse um caso base, ela não iria parar ao chegar no valor 0, mas continuaria a ser chamada para valores negativos, e não iria parar.