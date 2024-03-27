# 2787 - Xadrez

Neste problema, entretanto, queremos saber a cor da casa no canto inferior direito de um tabuleiro com dimensões quaisquer: L linhas e C colunas. No exemplo da figura, para L = 6 e C = 9, a casa no canto inferior direito será preta!

[Xadrez - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2787)

# Solução

```
#include <iostream>

int main() {
    int L, C;
    
    // Leitura das dimensões do tabuleiro
    std::cin >> L >> C;
    int corDaCasa = (L + C) % 2 == 0 ? 1 : 0;
    std::cout << corDaCasa << std::endl;
    
    return 0;
}
```

