# 266B	Queue at the School

https://codeforces.com/problemset/problem/266/B

# Solution

```
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, t;
    string s;

    cin >> n >> t;
    cin >> s;

    for (int i = 0; i < t; ++i)
        for (int j = 0; j < n - 1; ++j)
            if (s[j] == 'B' && s[j + 1] == 'G') {
                swap(s[j], s[j + 1]);
                // Avança um extra para não considerar o par 'GB' recém-formado
                j++;
            }

    cout << s << "\n";
}
```