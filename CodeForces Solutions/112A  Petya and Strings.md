# 112A	Petya and Strings

https://codeforces.com/problemset/problem/112/A

# Solution

```
#include <iostream>
#include <string>
#include <algorithm> // Para transform()

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    // Convertendo ambas as strings para minúsculas
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // Comparando as strings lexicograficamente
    if (str1 < str2) {
        cout << "-1" << endl;
    } else if (str1 > str2) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
```