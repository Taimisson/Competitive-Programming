# 2311 - Saltos Ornamentais

Disso, retira-se a nota mais baixa e a mais alta, o que gera um resultado parcial de 25,0. Então, pega-se a nota de execução e multiplica-a pela nota de partida para se chegar ao resultado final, que neste exemplo é de 50,0. Seu programa deve apresentar o resultado de uma competição de acordo com estas regras.

[Saltos Ornamentais - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2311)

# Solução

```
#include <iostream>
#include <string>
#include <algorithm> // Para std::sort
#include <iomanip> // Para std::setprecision

int main() {
    int N;
    std::cin >> N; // Lê o número de competidores

    for (int i = 0; i < N; i++) {
        std::string nome;
        double GD, notas[7], soma = 0.0;
        
        std::cin >> nome; // Lê o nome do competidor
        std::cin >> GD; // Lê o grau de dificuldade do salto

        for (int j = 0; j < 7; j++) {
            std::cin >> notas[j]; // Lê as notas dos juízes
        }

        std::sort(notas, notas + 7); // Ordena as notas

        // Soma as notas, excluindo a mais alta e a mais baixa
        for (int j = 1; j < 6; j++) {
            soma += notas[j];
        }

        double resultado = soma * GD; // Calcula o resultado

        // Imprime o resultado formatado com 2 casas decimais
        std::cout << nome << " " << std::fixed << std::setprecision(2) << resultado << std::endl;
    }

    return 0;
}
```