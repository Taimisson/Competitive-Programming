# Codificação de Variáveis e constantes

```
#include <stdio.h>

int main(){
    int x;
    const int constante = 1;
    x = 5;
    
    printf("%d\n", y);
    printf("%d\n", x);
    
    
    constante = 2; // Erro, não pode alterar constantes
    x = 6;
    printf("%d\n", x);
}

```

Isso aconteceu pois, na linha 8, tentamos atribuir um valor para uma variável constante. E, como vimos na aula passada, uma constante assume apenas um valor desde sua declaração até o fim do programa. Portanto, o código acima estaria certo até a linha 6.