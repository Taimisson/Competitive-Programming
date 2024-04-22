# 734A	Anton and Danik

https://codeforces.com/problemset/problem/734/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string s;
    cin >> n >> s;

    int a = 0, d = 0;
    for(char c : s){
        if(c == 'A')
            a++;
        else
            d++;
    }

    if(a > d)
        cout << "Anton" << "\n";
    else if(d > a)
        cout << "Danik" << "\n";
    else
        cout << "Friendship" << "\n";

}
```