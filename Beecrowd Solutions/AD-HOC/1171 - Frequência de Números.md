# 1171 - Frequência de Números

Neste problema sua tarefa será ler vários números e em seguida dizer quantas vezes cada número aparece na entrada de dados, ou seja, deve-se escrever cada um dos valores distintos que aparecem na entrada por ordem crescente de valor.

[Frequência de Números - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1171)

# Solution
```
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> numbers(N);
    map<int, int> frequency;

    for(int i = 0; i < N; ++i) {
        cin >> numbers[i];
        frequency[numbers[i]]++;
    }

    for(const auto& pair : frequency) {
        cout << pair.first << " aparece " << pair.second << " vez(es)" << endl;
    }

    return 0;
}
```