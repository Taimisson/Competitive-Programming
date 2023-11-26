# Sumário

- Operadores relacionais
- Falsou ou verdadeiro
- Estrutura de decisão SE

# Operadores relacionais

Operadores relacionais determinam se uma relação entre dois valores é verdadeira ou falsa.

Os principais operadores que serão utilizados em C estão representados na tabela abaixo:

Operador	Relação
<	        Menor
>	        Maior
<=	        Menor ou igual
>=	        Maior ou igual
==	        Igual
!=	        Diferente

- Observações:

A relação é sempre aplicada comparando o valor à esquerda do operador com o valor à direita, nessa ordem.
Perceba que a relação de igualdade é expressa por um operador com dois sinais de igual. Isto ocorre pois um único sinal de igual é utilizado para atribuição de valores, como visto em aulas passadas.

# Falso ou verdadeiro

Na programação em geral, os valores de falso e verdadeiro são atribuídos a números. Isto é, se uma determinada comparação for verdadeira, então ela terá valor 1, Caso contrário, terá valor 0.

Sabendo disso, podemos imprimir o resultado de uma comparação utilizando o comando printf:

```
printf("%d\n", 1 < 2);
printf("%d\n", 3 > 4);
/* Saída:
1
0

*/
```

# Estrutura de decisão SE

Utilizando os operadores relacionais acima, podemos aplicá-los para criar uma estrutura de decisão com base na veracidade de uma afirmação. Isto é, se tal afirmação for verdadeira, execute determinado código.

Essa estrutura é o if (do inglês, "se"), e faz exatamente o que foi dito acima. Sua sintaxe é a seguinte:

```
if( condição ){
    Códigos
}
```

Agora vamos explicar o que essa declaração significa.

Quando o programa chegar nessa estrutura, ele checará se a afirmação/condição contida dentro dos parênteses é verdadeira. Se for, então o código contido dentro das chaves será executado. Caso contrário, este código será ignorado e o programa seguirá sua execução depois das chaves.

```
if( 1 < 2 ){
    printf("1 menor que 2\n");
}
/* Saída:
1 menor que 2

*/
```

* Observação: Perceba que a comparação utilizada teve como resultado o valor 1, pois é verdadeira. Em C, qualquer valor diferente de 0 será considerado como verdadeiro. Para melhor entendimento, veja o código a seguir:

```
if(3){
    printf("Valor diferente de 0\n");
}
/* Saída:
Valor diferente de 0

*/
```

* Explicação:
Para que um valor seja par, o resto da divisão dele por 2 deve ser igual a 0, e é exatamente isso que o código acima faz.

Ele começa declarando a variável x, lê ela com scanf e checa se x, isto é, checa se x tem resto 0 na divisão por 2.

Caso essa afirmação seja verdadeira, o primeiro printf será executado.

Independentemente de a condição contida no primeiro if ser verdadeira ou falsa, o segundo if também será checado.

Caso x tenha um resto diferente de 0 na divisão por 2, então o segundo printf será executado.

