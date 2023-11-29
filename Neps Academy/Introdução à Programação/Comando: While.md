# Sumário

- Exemplo de problema;
- Estrutura while;
- Codificação.

# Exemplo de Problema

Faça um programa que imprima os 20 primeiros números positivos. Imprima um número em cada linha.

Podemos resolver esse problema de duas maneiras: manualmente, imprimindo, os números, 1, 2, 3, 4, ..., 20, ou utilizar uma estrutura de repetição para automatizar a impressão.

# Estrutura While

A estrutura while é uma estrutura de repetição, ou seja, uma estrutura que utilizamos para repetir um certo trecho de código.

While, do inglês, significa "Enquanto", então essa estrutura vai repetir um trecho de código enquanto uma certa condição for verdadeira.

Segue abaixo a sintaxe da estrutura.

```
while(condição){
	// Código
}```

Ao encontrar um while, o código irá testar a condição. Se ela for falsa, o while não é executado, mas se for verdadeira, o código entre as chaves será executado e depois a condição é verificada novamente.

Enquanto a condição for verdadeira, o código seguirá esse loop de executar o código e testar a condição, e no momento em que ela for falsa o while para de ser executado.

Veremos a seguinte algumas semelhanças entre a estrutura de seleção if, que já conhecemos, e o while que estamos aprendendo agora.

```
int main(){
	int i = 1;
	if(i < 5) {
		printf("%d\n", i);
	}
}
```

O código acima funciona da seguinte forma: a variável i é inicializada com o valor 1, e depois o if vai testar se o valor de i é menor do que 5. Se a condição for verdadeira, o que está entre as chaves vai ser executado, que no caso será apenas imprimir o valor de i. Como o valor de i é 1, quando executarmos o código, o código imprimirá 1.

Trocaremos agora o if pelo while e verificaremos o comportamento do código.
```
int main(){
	int i = 1;
	while(i < 5) {
		printf("%d\n", i);
	}
}
```

Trocando o if pelo while, o código terá um comportamento peculiar, imprimindo vários 1 sem parar. Isso acontece porque pelo funcionamento do while, enquanto a condição for verdadeira, o que está entre as chaves será executado, e como o valor de 
�
i no código não muda, 1 é sempre menor do que 5, então o while nunca para, imprimindo o 1 infinitamente.

É importante notar então que ao escrever o while é preciso de uma condição que em algum momento será falsa, caso contrário o programa repetirá o que está entre as chaves infinitamente, gerando o que chamamos na programação de loop infinito.

Para fazer o código funcionar, precisamos então fazer a condição ser falsa em algum momento. Então se dentro das chaves, a cada repetição, aumentarmos o valor de i, em algum momento a condição será falsa.

```
int main(){
	int i = 1;
	while(i<5){
		printf("%d\n", i);
		i = i+1;
	}
}
```

No código acima, o valor de i começará em 1, e será incrementado em uma unidade gradualmente, até o ponto em que na verificação o valor de i será igual a 5, que não é menor que 5, e a estrutura while para de repetir o código.

Ao executar nosso algoritmo, vemos que ele imprime os números de 1 até 4, pois quando o valor de i é 5 ele não executa mais o código dentro das chaves.

Para resolver o problema inicial, imprimir os primeiros 20 números positivos, basta alterarmos um pouco o código, mudando a condição do while.

```
int main(){
	int i = 1;
	while(i <= 20){
		printf("%d\n", i);
		i = i+1;
	}
}
```

Vemos então que o while é muito útil para repetir um trecho de código uma certa quantidade de vezes, utilizando uma variável para servir de contador, aumentando seu valor gradualmente.

