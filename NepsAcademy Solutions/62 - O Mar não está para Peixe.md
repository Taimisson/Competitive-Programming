# O Mar não está para Peixe

# Solução
```
//2393
#include <bits/stdc++.h>
using namespace std;

int mar[102][102];

int main()
{
    int n, x1, x2, y1, y2, i, j, count = 0;

    cin >> n;

    while(n--){
        cin >> x1 >> x2 >> y1 >> y2;
        x1--; x2--; y1--; y2--;

        for(i = x1; i < x2; i++)
            for(j = y1; j < y2; j++)
                if(!mar[i][j]){
                    mar[i][j] = true;
                    count++;
                }
    }

    cout << count;

    return 0;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();

```