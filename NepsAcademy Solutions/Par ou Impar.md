# Par ou Impar

# Solução em C
```
#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int B, C;
	scanf("%d",&B);
	scanf("%d",&C);

    // Seu código vai aqui
	if((B + C) % 2 == 0)
		printf("Bino");
	else
		printf("Cino");
	
	return 0;
}
```