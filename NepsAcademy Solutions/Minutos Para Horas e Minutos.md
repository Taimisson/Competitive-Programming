# Minutos Para Horas e Minutos

# Solution
```
#include <bits/stdc++.h>

using namespace std;

int main(){
    int m;
    cin >> m;

    int horas = m / 60;
    int minutos = m % 60;

    cout << horas << endl;
    cout << minutos << endl;

    return 0;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
```