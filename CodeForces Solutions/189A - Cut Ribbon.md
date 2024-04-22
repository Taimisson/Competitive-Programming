# 189A - Cut Ribbon

https://codeforces.com/problemset/problem/189/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    // Vetor dp, inicializado com -1, representando que ainda não calculamos a resposta para esse comprimento
    int dp[4001];
    fill(dp, dp+4001, -1);
    dp[0] = 0; // Caso base: 0 pedaços para comprimento 0

    for(int i = 1; i <= n; i++) {
        // Se é possível cortar um pedaço de comprimento a, b ou c, atualize dp[i]
        if(i >= a && dp[i-a] != -1) dp[i] = max(dp[i], dp[i-a] + 1);
        if(i >= b && dp[i-b] != -1) dp[i] = max(dp[i], dp[i-b] + 1);
        if(i >= c && dp[i-c] != -1) dp[i] = max(dp[i], dp[i-c] + 1);
    }

    cout << dp[n] << endl; // O máximo número de pedaços que podemos obter

    return 0;
}
```
