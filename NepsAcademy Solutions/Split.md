# Split

# Solução
```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; ++i) cin >> a[i];

    int maior = 0, posMaior;

    for(int i = 0; i < n; ++i)
        if(a[i] > maior){
            maior = a[i];
            posMaior = i;
        }

    int sumEsquerda = 0, sumDireita = 0;

    for(int i = 0; i < posMaior; ++i)
        sumEsquerda += a[i];

    for(int i = posMaior + 1; i < n; ++i)
        sumDireita += a[i];

    cout << sumEsquerda << "\n" << sumDireita << endl;

    return 0;
}


auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```