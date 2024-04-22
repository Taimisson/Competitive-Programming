# 96A	Football

https://codeforces.com/problemset/problem/96/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    cin >> s;
    int count1 = 0, count0 = 0;
    for(char c : s){
        if(c == '1') count1++;
        else count1 = 0;
        
        if(c == '0') count0++;
        else count0 = 0;
            
        if(count1 >= 7 || count0 >= 7) break;
    }
    
    if(count1 >= 7 || count0 >= 7) cout << "YES" << "\n";
    else cout << "NO" << "\n";

    return 0;
}
```