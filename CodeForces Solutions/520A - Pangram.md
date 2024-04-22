# 520A	Pangram

https://codeforces.com/problemset/problem/520/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    set<char> letters;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; ++i){
        char c;
        cin >> c;
        letters.insert(tolower(c));
    }
    
    if(letters.size() == 26) cout << "YES" << endl;
    else cout << "NO" << endl;
}
```