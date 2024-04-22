# 200B Drinks

https://codeforces.com/problemset/problem/200/B

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    double soma = 0;
    for(int i = 0; i < n; ++i){
        double p;
        cin >> p;
        soma += p;
    }

    double media = soma / n;
    cout.precision(12);
    cout << media << "\n";

}
```