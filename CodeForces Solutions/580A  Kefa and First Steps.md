# 580A	Kefa and First Steps

https://codeforces.com/problemset/problem/580/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    
    int steps[n];
    for(int i = 0; i < n; ++i)
        cin >> steps[i];
    
    int contador = 1, maxContador = 1;
    for(int i = 1; i < n; ++i)
        if(steps[i] < steps[i - 1])
            contador = 1;
        else{
            contador++;
            maxContador = max(maxContador, contador);
        }
            
    cout << maxContador << "\n";
    
    return 0;
}
```