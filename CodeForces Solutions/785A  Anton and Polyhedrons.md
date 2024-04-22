# 785A  Anton and Polyhedrons

https://codeforces.com/problemset/problem/785/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    map<string, int> faces = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };

    int n, contador = 0;
    cin >> n;

    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        contador += faces[s];
    }

    cout << contador << endl;
    return 0;
}

```