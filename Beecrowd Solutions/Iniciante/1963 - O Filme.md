# 1963 - O Filme

QUE ABSURDO! O PREÇO DO CINEMA SUBIU … % !!

Mas ela não é muito boa em Matemática, e está solicitando sua ajuda para calcular a porcentagem de que precisa para completar o cartaz.

[O Filme - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1963)

# Solução

```
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double precoAntigo, precoNovo, aumentoPercentual;

    // Lê os valores de entrada
    cin >> precoAntigo >> precoNovo;

    // Calcula o aumento percentual
    aumentoPercentual = ((precoNovo - precoAntigo) / precoAntigo) * 100;

    // Configura a precisão de saída para duas casas decimais
    cout << fixed << setprecision(2);

    // Mostra o resultado
    cout << aumentoPercentual << "%" << endl;

    return 0;
}

```