# 1030A	In Search of an Easy Problem

https://codeforces.com/problemset/problem/1030/A

# Solution
```
    #include <iostream>
    #include <string>

    using namespace std;

    int main() {
        int n;
        cin >> n;

        bool isHard = false;

        for (int i = 0; i < n; ++i) {
            int opinion;
            cin >> opinion;

            if (opinion == 1) {
                isHard = true;
                break;
            }
        }

        if (isHard) cout << "HARD" << endl;
        else cout << "EASY" << endl;

    }

```