# 61A	Ultra-Fast Mathematician

https://codeforces.com/problemset/problem/61/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string num1, num2, resultado;
    cin >> num1 >> num2;

    for (int i = 0; i < num1.length(); ++i)
        if (num1[i] != num2[i]) resultado += '1';
        else resultado += '0';

    cout << resultado << "\n";
}

```