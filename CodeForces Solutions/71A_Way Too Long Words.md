# 71A Way Too Long Words

https://codeforces.com/problemset/problem/71/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    vector<string> words(n);
    
    for(int i = 0; i < n; i++)
        cin >> words[i];
        
    for(int i = 0; i < n; i++)
        if(words[i].length() > 10)
            cout << words[i][0] << words[i].length() - 2 << words[i][words[i].length() - 1] << "\n";
        else
            cout << words[i] << "\n";
    cout << "\n";
    
    return 0;
}
```