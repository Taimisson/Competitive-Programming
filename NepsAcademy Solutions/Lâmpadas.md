# Lâmpadas

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    bool lampadaA, lampadaB;
    lampadaA = lampadaB = false;

    while(n--){
        int x;
        cin >> x;
        if(x == 1){
            lampadaA = !lampadaA;
        }else if(x == 2) {
            lampadaA = !lampadaA;
            lampadaB = !lampadaB;
        }
    }

    if(lampadaA) cout << 1 << endl;
    else cout << 0 << endl;

    if(lampadaB) cout << 1 << endl;
    else cout << 0 << endl;

    return 0;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```