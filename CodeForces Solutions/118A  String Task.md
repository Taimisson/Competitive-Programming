# String Task

https://codeforces.com/problemset/problem/118/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string vogais = "AEIOUYaeiouy", s;
    cin >> s;

    for(int i = 0; i < s.size(); ++i){
        s[i] = tolower(s[i]);
        if(vogais.find(s[i]) != string::npos){
            s.erase(i, 1);
            i--;
        }
    }

    for(int i = s.size() - 1; i >= 0; i--)
        s.insert(i, ".");

    cout << s << "\n";
}


```