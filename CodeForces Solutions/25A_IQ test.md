# 25A	IQ test

https://codeforces.com/problemset/problem/25/A

# Solution

```
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0) evenCount++;
        else oddCount++;
        
    }

    bool isEvenMajority = evenCount > oddCount;

    for (int i = 0; i < n; ++i) {
        if ((isEvenMajority && numbers[i] % 2 != 0) || (!isEvenMajority && numbers[i] % 2 == 0)) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}

```