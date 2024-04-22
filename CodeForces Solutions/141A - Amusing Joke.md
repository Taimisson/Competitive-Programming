# 141A	Amusing Joke

https://codeforces.com/problemset/problem/141/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string a, b, c;
    cin >> a >> b >> c;

    string total = a + b;

    sort(total.begin(), total.end());
    sort(c.begin(), c.end());

    if(total.size() != c.size()){
        cout << "NO" << endl;
        return 0;
    }
    
    int n = total.size();
    for(int i = 0; i < n; ++i)
        if(total[i] != c[i])
        {
            cout << "NO" << endl;
            return 0;
        }
    
    cout << "YES" << endl;
    return 0;
}

```