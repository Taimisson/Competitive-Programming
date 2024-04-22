# 4C	Registration System

https://codeforces.com/problemset/problem/4/C

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    map<string, int> db;

    for(int i = 0; i < n; ++i){
        string nome;
        cin >> nome;

        if(db.count(nome) == 0){
            db[nome] = 1;
            cout << "OK" << endl;
        }
        else
        {
            cout << nome << db[nome] << endl;
            db[nome] += 1;
        }

    }
}

```