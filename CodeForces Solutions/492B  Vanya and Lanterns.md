# 492B - Vanya and Lanterns

https://codeforces.com/problemset/problem/492/B

# Solution

```
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip> // Para std::setprecision

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    
    vector<int> lanterns(n);
    for (int i = 0; i < n; ++i) {
        cin >> lanterns[i];
    }
    
    // Ordena as posições das lanternas
    sort(lanterns.begin(), lanterns.end());
    
    // Calcula a distância máxima entre lanternas consecutivas
    double maxDistance = 0;
    for (int i = 1; i < n; ++i) {
        maxDistance = max(maxDistance, (double)(lanterns[i] - lanterns[i - 1]) / 2);
    }
    
    // Verifica as distâncias das lanternas nas extremidades da rua
    maxDistance = max(maxDistance, (double)lanterns[0]); // Do início da rua à primeira lanterna
    maxDistance = max(maxDistance, (double)(l - lanterns[n - 1])); // Da última lanterna ao fim da rua
    
    cout << fixed << setprecision(9) << maxDistance << endl;
    
    return 0;
}

```