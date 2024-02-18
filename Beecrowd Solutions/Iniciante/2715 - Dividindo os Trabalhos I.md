# 2715 - Dividindo os Trabalhos I

Como os dois estão muito ocupados na biblioteca pegando os livros para resolverem os trabalhos, eles pediram a você para determinar a diferença.

[Dividindo os Trabalhos I - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2715)

# Solução

```
#include <stdio.h>
#include <stdlib.h> // Incluindo para usar llabs

#define ll long long

int main() {
    int n;

    while(scanf("%d", &n) != EOF){
        int i, v[1000010];
        ll a, b, min;

        a = b = 0;

        for(i = 0; i < n; i++){
            scanf("%d", &v[i]);
            b += v[i];
        }

        min = b;
        for(i = 0; i < n; i++){
            a += v[i];
            b -= v[i];

            ll currentDiff = llabs(b - a); // Usando llabs para long long
            if(currentDiff < min) {
                min = currentDiff;
            }
            if (currentDiff == 0) break; // Parada precoce se a diferença for 0
        }

        printf("%lld\n", min);
    }

    return 0;
}

```