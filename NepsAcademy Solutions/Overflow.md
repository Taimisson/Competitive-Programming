# Overflow

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p, q;
    char c;
    
    int ans = 0;
    
    cin >> n;
    cin >> p >> c >> q;
    
    if(c == '+') ans = p + q;
    else ans = p * q;
    
    if(ans > n) cout << "OVERFLOW" << endl;
    else cout << "OK" << endl;
    
    return 0;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```