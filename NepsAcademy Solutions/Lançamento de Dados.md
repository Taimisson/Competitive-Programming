# Lançamento de Dados

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Criar um vetor de contagem de tamanho 12 (inicialmente com zeros)
    vector<int> contagem(12, 0);

    // Ler os N resultados dos lançamentos de dados
    for (int i = 0; i < N; ++i) {
        int resultado;
        cin >> resultado;
        contagem[resultado - 1]++;
    }

    // Determinar a quantidade máxima de ocorrências
    int max_ocorrencias = *max_element(contagem.begin(), contagem.end());

    // Identificar todos os números que tiveram a quantidade máxima de ocorrências
    vector<int> numeros_max_ocorrencias;
    for (int i = 0; i < 12; ++i) {
        if (contagem[i] == max_ocorrencias) {
            numeros_max_ocorrencias.push_back(i + 1);
        }
    }

    // Imprimir os números em ordem crescente
    for (size_t i = 0; i < numeros_max_ocorrencias.size(); ++i) {
        if (i > 0) {
            cout << " ";
        }
        cout << numeros_max_ocorrencias[i];
    }
    cout << endl;

    return 0;
}


auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```