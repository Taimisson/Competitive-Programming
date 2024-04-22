# 581A - Vasya the Hipster

https://codeforces.com/problemset/problem/581/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b; // a red socks and b blue socks

    int daysUsingBlueAndRedSocks = 0;
    while(a > 0 && b > 0) {
        a--;
        b--;
        daysUsingBlueAndRedSocks++;
    }

    int daysUsingOnlyTheSameColorSocks = 0;
    if(a > 0) {
        daysUsingOnlyTheSameColorSocks = a / 2;
    } else if(b > 0) {
        daysUsingOnlyTheSameColorSocks = b / 2;
    }

    cout << daysUsingBlueAndRedSocks << " " << daysUsingOnlyTheSameColorSocks << endl;



    return 0;
}

```