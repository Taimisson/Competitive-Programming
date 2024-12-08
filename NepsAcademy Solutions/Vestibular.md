# Vestibular

# Solution
```
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    string gabarito, respostas;
    cin >> gabarito >> respostas;

    int acertos = 0;

    for(int i = 0; i < n; ++i)
        if(gabarito[i] == respostas[i]) acertos++;

    cout << acertos << endl;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
```