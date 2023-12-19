# 1078 - Tabuada

Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:      
1 x N = N      2 x N = 2N        ...       10 x N = 10N

[Tabuada - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1078)

# Solução

```
#include <iostream>
using namespace std;
 
int main() {
 
    int n; 
    cin >> n;
    
    for(int i = 1; i <= 10; i++)
        cout << i << " x " << n << " = " << i * n << "\n";
 
    return 0;
}```