# 723A	The New Year: Meeting Friends

https://codeforces.com/problemset/problem/723/A

# Solution

```
#include <iostream>
#include <algorithm> // Para sort
#include <cmath>     // Para abs

using namespace std;

int main() {
    int x[3];

    for (int i = 0; i < 3; ++i)
        cin >> x[i];

    sort(x, x + 3);

    int distanciaTotal = abs(x[1] - x[0]) + abs(x[1] - x[2]);

    cout << distanciaTotal << endl;

    return 0;
}
```