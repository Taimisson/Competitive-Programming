# 705A	Hulk

https://codeforces.com/problemset/problem/705/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string feeling = "";
    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i){
        if(i > 1)
            feeling += " that ";
        if(i % 2 == 1)
            feeling += "I hate";
        else
            feeling += "I love";
    }
    feeling += " it";

    cout << feeling << "\n";

    return 0;
}
```