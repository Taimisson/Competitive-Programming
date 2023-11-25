# Sumário

- Operadores aritméticos
- Precedência
- Precedência empatada
- Parênteses
- Codificação de exemplos

# Operadores aritméticos

```
Operador	Operação	Precedência
+	        Soma	        1
-	        Subtração	    1
*	        Multiplicação	2
/	        Divisão	        2
%	        Resto	        2
```

# Precedência

As operações aritméticas são realizadas em ordem decrescente de precedência.

Portanto, primeiro serão realizadas as operações utilizando: 
∗, / e %

# Precedência empatada

Caso o programa utilize uma fórmula com operadores de mesma precedência, primeiro serão executados os mais à esquerda.

Observação: numa divisão de números inteiros em C, o programa dará como resultado apenas a parte inteira do quociente, ignorando a parte decimal. Isso explica a divisão 2/3 ter 0 como resultado, pois 2/3=0,66666...

# Parênteses

Os parênteses podem ser utilizados para especificar a ordem das operações, assim como em expressões aritméticas aprendidas na matemática.

# Codificação de exemplos

```
#include <stdio.h>

int main() {
     float nota1, nota2;
     printf("Digite a primeira nota: ");
     scanf("%f", &nota1);
     printf("Digite a segunda nota: ");
     scanf("%f", &nota2);
     printf("Media = %f\n", (nota1+nota2)/2);
}

```

Como você pôde perceber, o programa acima realiza o cálculo da média entre duas notas de um aluno.