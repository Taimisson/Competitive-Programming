# 230B	T-primes

https://codeforces.com/problemset/problem/230/B

# Solution
```
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MAX = 1e6 + 5; // 10^6
vector<bool> is_prime(MAX + 1, true);

void sieve(){
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i * i <= MAX; i++){
        if(is_prime[i]){
            for(int j = i * i; j <= MAX; j += i){
                is_prime[j] = false;
            }
        }
    }
}

bool isTPrime(ll n){
    if(n == 1) return false;
    ll sqrt_n = sqrt(n);
    return sqrt_n * sqrt_n == n && is_prime[sqrt_n];
}

int main()
{
    sieve();
    int n;
    cin >> n;
    
    while(n--){
        ll x;
        cin >> x;
        cout << (isTPrime(x) ? "YES" : "NO") << endl;
    }
}

```