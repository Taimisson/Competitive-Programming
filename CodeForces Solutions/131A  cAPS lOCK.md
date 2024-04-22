# 131A	cAPS lOCK

https://codeforces.com/problemset/problem/131/A

# Solution

```
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string word;
    cin >> word;

    bool isCapsLockError = true;

    // Check if all letters except possibly the first are uppercase
    for (int i = 1; i < word.length(); ++i)
        if (!isupper(word[i])) {
            isCapsLockError = false;
            break;
        }

    if (isCapsLockError) {
        for (char &c : word) {
            if (isupper(c)) {
                c = tolower(c); // Convert to lowercase
            } else {
                c = toupper(c); // Convert to uppercase
            }
        }
    }

    cout << word << endl;

    return 0;
}

```