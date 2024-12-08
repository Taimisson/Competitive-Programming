# Divisão do Tesouro

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, N;
    cin >> A >> N;
    
    int total_marinheiros = N + 2;

    int M = A / total_marinheiros;
    A = 2 * M;
    
    cout << A << endl;
    
    return 0;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```