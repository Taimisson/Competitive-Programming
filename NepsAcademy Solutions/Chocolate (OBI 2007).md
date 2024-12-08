# Chocolate (OBI 2007)

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, ans = 0;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i) ans += a[i] - 1;

    cout << ans << endl;

    return 0;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
```