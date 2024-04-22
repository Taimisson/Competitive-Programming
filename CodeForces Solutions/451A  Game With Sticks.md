# 451A Game With Sticks

https://codeforces.com/problemset/problem/451/A

# Solution

```
#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    int min_sticks = std::min(n, m);

    if (min_sticks % 2 == 0)
        std::cout << "Malvika" << std::endl;
    else
        std::cout << "Akshat" << std::endl;

    return 0;
}

```