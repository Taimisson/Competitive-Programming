# Zero para Cancelar

# Solução
```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x == 0) a.pop_back();
        else a.push_back(x);
    }

    int sum = 0;
    for(int num : a) sum += num;

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