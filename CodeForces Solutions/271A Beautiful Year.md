# 271A	Beautiful Year

https://codeforces.com/problemset/problem/271/A

# Solution

```
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int hasYear(int year){
    string yearStr = to_string(year);
    sort(yearStr.begin(), yearStr.end());
    for(int i = 1; i < yearStr.length(); ++i)
        if(yearStr[i] == yearStr[i - 1])
            return false;
    return true;
}

int solve(int year){
    do{
        year++;
    } while(!hasYear(year));
    return year;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int year;
    cin >> year;
    cout << solve(year) << "\n";

}
```