# Soma dos Elementos

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;

    while(n--){
        int x;
        cin >> x;
        sum += x;
    }
    cout << sum << endl;
    
    return 0;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```