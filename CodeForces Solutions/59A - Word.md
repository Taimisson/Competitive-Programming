# 59A	Word

https://codeforces.com/problemset/problem/59/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string word;
    cin >> word;

    int countUpper = 0;
    for(char c : word)
        if(isupper(c))
            countUpper++;

    if(countUpper > word.size() / 2){
        for(char &c : word){
            c = toupper(c);
        }
        cout << word << "\n";
    } else {
        for(char &c : word)
            c = tolower(c);
        cout << word << "\n";
    }
}
```