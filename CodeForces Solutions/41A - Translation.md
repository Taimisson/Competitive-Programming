# 41A	Translation

https://codeforces.com/problemset/problem/41/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s, t;
    cin >> s >> t;

    string translated = s;
    reverse(translated.begin(), translated.end());

    if(t == translated)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
}
```