# StringStream

https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?isFullScreen=true

# Solution

```
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> nums;
    char c;
    int num;
    while(ss >> num){
        nums.push_back(num);
        ss.ignore();
    }
    return nums;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
```
