# 2727 - Código Secreto

Joana gosta de brincar de fingir ser uma agente secreta com suas amigas Bruna, Jaqueline e Laura. Joana e Bruna criaram um código secreto para se comunicar sem que suas inimigas descubram seus planos.
O código secreto funciona da seguinte forma:

[Código Secreto - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2727)

# Solução

```
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

// Função para converter os pontos em índices de letras
char decode(const string& code) {
    istringstream stream(code);
    string segment;
    int groups = 0;
    while (getline(stream, segment, ' ')) {
        ++groups;
    }

    int index = segment.size();  // Quantidade de pontos no último grupo lido
    char letter = 'a' + (index - 1) + (groups - 1) * 3;
    return letter;
}

int main() {
    string input;
    while (getline(cin, input)) {
        int N = stoi(input);  // Lê o número de linhas para decodificação

        for (int i = 0; i < N; ++i) {
            getline(cin, input);
            cout << decode(input) << endl;
        }
    }
    return 0;
}
```