# 236A	Boy or Girl

https://codeforces.com/problemset/problem/236/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    set<char> caracteres;
    string name;
    cin >> name;

    for(char c : name)
        caracteres.insert(c);

    if(caracteres.size() % 2 == 0)
        cout << "CHAT WITH HER!" << "\n";
    else
        cout << "IGNORE HIM!" << "\n";
}
```