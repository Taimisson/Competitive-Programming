# 339A	Helpful Maths

https://codeforces.com/problemset/problem/339/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s; // Ler a string de entrada

   vector<int> numbers; // Vetor para armazenar os números

    for (char c : s)
        if (c != '+')
            numbers.push_back(c - '0'); // Convertendo o caractere para int e armazenando

    sort(numbers.begin(), numbers.end());

    for(int i = 0; i < numbers.size(); ++i){
        cout << numbers[i];
        if( i < numbers.size() - 1)
            cout << "+";
    }
    cout << "\n";

}
```