# 617A	Elephant

https://codeforces.com/problemset/problem/617/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int x;
    cin >> x;

    int steps[] = {5, 4, 3, 2, 1};
    int stepCount = 0;

    for (int i = 0; i < 5; i++)
        while (x >= steps[i]) {
            x -= steps[i];
            stepCount++;
        }


    cout << stepCount << "\n";
}
```