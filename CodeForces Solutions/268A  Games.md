# 268A	Games

https://codeforces.com/problemset/problem/268/A

# Solution

```
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> home(n), guest(n);

    // Lendo as cores dos uniformes de cada time
    for (int i = 0; i < n; ++i) {
        cin >> home[i] >> guest[i];
    }

    int count = 0;
    // Verificando cada combinação de jogos
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j && home[i] == guest[j]) {
                ++count;
            }
        }
    }

    cout << count << endl;
    return 0;
}

```