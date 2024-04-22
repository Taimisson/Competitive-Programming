# 732A - Buy a Shovel

https://codeforces.com/problemset/problem/732/A

# Solution

```
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;

    int shovels = 1;
    int price = k;

    while (price % 10 != 0 && price % 10 != r) // while the last digit of the price is not 0 or r
    {
        price += k;
        shovels++;
    }

    cout << shovels << endl;

    return 0;
}

```