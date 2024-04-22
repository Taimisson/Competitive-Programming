# 155A - I_love_\%username\%

https://codeforces.com/problemset/problem/155/A

# Solution

```
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i];
    }

    int amazing = 0; // Contador de desempenhos incríveis
    int maxPoints = points[0]; // Melhor desempenho até o momento
    int minPoints = points[0]; // Pior desempenho até o momento

    // Começamos a verificar a partir do segundo concurso
    for (int i = 1; i < n; i++) {
        if (points[i] > maxPoints) {
            amazing++;
            maxPoints = points[i];
        } else if (points[i] < minPoints) {
            amazing++;
            minPoints = points[i];
        }
    }

    cout << amazing << endl;

    return 0;
}

```