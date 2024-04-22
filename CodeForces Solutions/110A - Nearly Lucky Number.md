# 110A	Nearly Lucky Number

https://codeforces.com/problemset/problem/110/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    int count = 0;
    for (char c : s)
        if (c == '4' || c == '7')
            count++;

    if (count == 4 || count == 7)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
}
```