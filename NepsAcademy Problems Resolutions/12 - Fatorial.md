# Fatorial

Faça um programa para ler um inteiro N e imprima o valor de N!. N! significa fatorial de N.

- Entrada

A entrada consiste de uma linha contendo o valor de N.

- Saída

A saída consiste de uma linha contendo o valor de N!.

- Restrições

0≤N≤12

Exemplos de Entrada	| Exemplos de Saída

        0                   1
        1                   1
        5                   120
        6                   720

# Solução em C
```

#include <stdio.h>
#include <stdlib.h>

int fatorial(int x){
	if(x == 0 )
		return 1;
	
	return x * fatorial(x-1);
}

int main(){    	
    // Seu código vai aqui
	int a;
	scanf("%d", &a);
	
	printf("%d", fatorial(a));
	
    return 0;
}
```

# Solução em C++
```
#include <iostream>
using namespace std;

int fatorial(int n){
    if(n == 0) return 1;
    
    return n * fatorial(n-1);
}

int main()
{
    int a;
    cin >> a;

    cout << fatorial(a);

    return 0;
}
```