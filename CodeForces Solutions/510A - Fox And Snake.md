# 510A	Fox And Snake

https://codeforces.com/problemset/problem/510/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; ++i){
        if(i % 2 == 0)
            for(int j = 0; j < m; ++j)
                cout << "#";
        else
            if((i / 2) % 2 == 0){ 
                for(int j = 0; j < m - 1; ++j)
                    cout << ".";
                cout << "#"; 
            }else{
                cout << "#";
                for(int j = 1; j < m; ++j)
                    cout << ".";
            }
        cout << "\n";
    }
}

```