# 2540 - Impeachment do Líder

[Impeachment do Líder - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2540)

# Solução

```
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while(cin >> n){
        int x, votos = 0;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            if(x == 1) votos++;
        }

        if(votos * 3 >= 2 * n) cout << "impeachment" << endl;
        else cout << "acusacao arquivada" << endl;
    }

    return 0;

}
```