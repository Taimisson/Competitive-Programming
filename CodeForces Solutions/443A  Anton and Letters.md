# 443A	Anton and Letters

https://codeforces.com/problemset/problem/443/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string inputString;
    getline(cin, inputString);

    set<char> letras;
    for(char c : inputString)
        if(isalpha(c))
            letras.insert(c);

    if(!letras.empty()) cout << letras.size() << endl;
    else cout << 0 << endl;

}
```