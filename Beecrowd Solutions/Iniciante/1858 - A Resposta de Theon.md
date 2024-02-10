# 1858 - A Resposta de Theon

Sua tarefa é ajudar Theon a determinar qual deve ser sua resposta de forma a minimizar o número de vezes que ele será atingido.

[A Resposta de Theon - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1858)

# Solução

```
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> T(N);
    for (int i = 0; i < N; ++i) {
        cin >> T[i];
    }

    int minIndex = 0;
    for (int i = 1; i < N; ++i) {
        if (T[i] < T[minIndex]) {
            minIndex = i;
        }
    }

    // Adicionando 1 porque os índices em C++ começam em 0, mas a questão considera a partir de 1
    cout << (minIndex + 1) << endl;

    return 0;
}
```
