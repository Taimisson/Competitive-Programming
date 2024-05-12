# 2523 - A Mensagem de Will

Há exatamente 26 lâmpadas penduradas na parede da sua sala, numeradas de 1 a 26 da esquerda para a direita. Além disso, há uma letra do alfabeto pintada na parede em baixo de cada lâmpada. Quando Will quer lhe enviar uma mensagem, ele irá (misteriosamente) piscar, uma a uma, as lâmpadas correspondentes a cada letra de sua mensagem. Por exemplo, se ele quer enviar a mensagem HELP, ele irá piscar, nesta ordem, as lâmpadas acima das letras H, E, L e P.

Dada a letra associada a cada lâmpada e a ordem das lâmpadas que foram piscadas por Will, decifre a mensagem que ele enviou!

[A Mensagem de Will - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2523)

# Solução
```
#include <iostream>
#include <string>

using namespace std;

int main() {
    string lampMapping;  // Armazena o mapeamento das lâmpadas para as letras
    int n;              // Número de lâmpadas que foram piscadas
    int index;          // Index da lâmpada que foi piscada

    // Ler entradas até EOF
    while (cin >> lampMapping) {
        cin >> n;
        string message = "";  // Inicializa a mensagem a ser decodificada

        for (int i = 0; i < n; i++) {
            cin >> index;  // Lê o índice da lâmpada piscada
            message += lampMapping[index - 1];  // Converte índice para letra (índice - 1 porque os índices começam em 1)
        }

        cout << message << endl;  // Imprime a mensagem decodificada para cada caso de teste
    }

    return 0;
}
```
