# 3047 - A idade de Dona Mônica

Por exemplo, se sabemos que dona Mônica tem 52 anos e as idades conhecidas de dois dos filhos são 14 e 18 anos, então a idade do outro filho, que não era conhecida, tem que ser 20 anos, pois a soma das três idades tem que ser 52. Portanto, a idade do filho mais velho é 20. Em mais um exemplo, se dona Mônica tem 47 anos e as idades de dois dos filhos são 21 e 9 anos, então o outro filho tem que ter 17 anos e, portanto, a idade do filho mais velho é 21.

[A idade de Dona Mônica - Beecrowd](https://judge.beecrowd.com/pt/problems/view/3047)

# Solução

```
#include <iostream>
using namespace std;

int main() {
    int M, A, B;
    cin >> M >> A >> B; 
    
    int C = M - (A + B);
    int oldest = max(A, max(B, C));
    cout << oldest << endl;

    return 0;
}
```

