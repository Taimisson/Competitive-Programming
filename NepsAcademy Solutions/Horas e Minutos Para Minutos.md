# Horas e Minutos Para Minutos 

# Solution
```
#include <bits/stdc++.h>

using namespace std;

int main(){
    int h, m;
    cin >> h >> m;

    if(h != 0) m += h * 60;

    cout << m << endl;

    return 0;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
```