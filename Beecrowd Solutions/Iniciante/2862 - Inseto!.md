# 2862 - Inseto!

Devita é o príncipe dos Calsadins. Juntamente com Pana, eles vão atrás de Tataroko, o nome de nascimento de Kogu, para tentar dominar o mundo. Ele possui um rastreador que mede o nível de energia de qualquer ser vivo. Todos os seres com o nível menor ou igual a 8000, ele considera como se fosse um inseto. Quando passa deste valor, que foi o caso de Kogu, ele se espanta e grita “Mais de 8000”. Baseado nisso, utilize a mesma tecnologia e analise o nível de energia dos seres vivos.

[Inseto! - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2862)

# Solução
```
#include <iostream>
using namespace std;

int main() {
    int C; // Número de casos de teste
    cin >> C;

    for(int i = 0; i < C; i++) {
        int N; // Nível de energia
        cin >> N;

        if (N > 8000) {
            cout << "Mais de 8000!" << endl;
        } else {
            cout << "Inseto!" << endl;
        }
    }

    return 0;
}

```
