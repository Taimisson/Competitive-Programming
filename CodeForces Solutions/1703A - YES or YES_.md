# 1703A - YES or YES?

https://codeforces.com/problemset/problem/1703/A

# Solution
```
#include <iostream>
#include <string>
#include <algorithm> // Para std::transform

using namespace std;

// Função para converter uma string para maiúsculas
string toUpperCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    return str;
}

int main() {
    int t; // Número de casos de teste
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        // Converte a string para maiúsculas para a comparação
        s = toUpperCase(s);

        if (s == "YES") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

```
