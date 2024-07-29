# Positivo, Negativo ou Nulo

# Solução
```
#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int X;
	scanf("%d",&X);

    // Seu código vai aqui
	if(X > 0)
		printf("positivo");
	else if(X < 0)
		printf("negativo");
	else
		printf("nulo");	

	return 0;
}
```
