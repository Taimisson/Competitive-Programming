# 208A	Dubstep

https://codeforces.com/problemset/problem/208/A

# Solution

```
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to replace all occurrences of a substring
string replaceAll(string str, const string& from, const string& to) {
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
    return str;
}

// Function to trim leading and trailing spaces
string trim(const string& str) {
    size_t first = str.find_first_not_of(' ');
    size_t last = str.find_last_not_of(' ');
    if (first == string::npos || last == string::npos)
        return "";
    return str.substr(first, (last - first + 1));
}

int main() {
    string remix;
    getline(cin, remix);

    // Replace "WUB" with space
    string original = replaceAll(remix, "WUB", " ");

    // Trim and output the original song
    cout << trim(original) << endl;

    return 0;
}

```