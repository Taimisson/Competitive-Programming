# Fibonacci 

Uma famosa sequência matemática é a sequência de Fibonacci, está sequência é definida por:

fib(0)=fib(1)=1

fib(n)=fib(n−1)+fib(n−2)

Escreva um programa que dado N retorna o n-ésimo número de Fibonacci.

- Entrada

A entrada contem um único número N.

- Saída

O valor do n-ésimo número de Fibonacci.

- Restrições

0≤N≤30

Exemplos de Entrada	| Exemplos de Saída
        3                   3
        5                   8

# Solução em C
```
#include <stdio.h>
#include <stdlib.h>

int fib(int x){
	if(x == 0 || x == 1)
		return 1;
	
	return fib(x - 1) + fib(x - 2);
}

int main(){    	
    // Seu código vai aqui
	int a;
	scanf("%d", &a);
	
	printf("%d", fib(a));
	
    return 0;
}
```
# Solução em C++
```
#include <iostream>
using namespace std;

int fib(int n){
    if(n == 0 || n == 1)
        return 1;

    return fib(n-1) + fib(n-2);
}

int main()
{
    int a;
    cin >> a;
    
    cout << fib(a);

    return 0;
}

```