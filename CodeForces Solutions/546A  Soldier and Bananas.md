# 546A	Soldier and Bananas

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int k, dinheiro, bananas, emprestado = 0;
    cin >> k >> dinheiro >> bananas;

    int custoTotal = 0;

    for(int i = 1; i <= bananas; ++i)
        custoTotal += i * k;

    emprestado = custoTotal - dinheiro;
    if(emprestado < 0) emprestado = 0;

    cout << emprestado << "\n";
}
```