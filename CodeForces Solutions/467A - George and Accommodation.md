# 467A	George and Accommodation

https://codeforces.com/problemset/problem/467/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, living, available, move = 0;
    cin >> n;
    while (n--) {
        cin >> living >> available;
        if(available - living >= 2)
            move++;
    }
    cout << move << "\n";

}
```