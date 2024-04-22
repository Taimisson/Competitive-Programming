# 1409A - Yet Another Two Integers Problem

https://codeforces.com/problemset/problem/1409/A

# Solutionm

```
#include <iostream>
#include <cmath> // For std::abs

int main() {
    int t;
    std::cin >> t; // Reading the number of test cases

    while (t--) {
        int a, b;
        std::cin >> a >> b; // Reading each pair of integers

        int difference = std::abs(a - b); // Calculate the absolute difference
        int moves = difference / 10; // Calculate the full steps of 10 that can be made
        if (difference % 10 != 0) moves++; // If there's a remainder, add an extra move

        std::cout << moves << std::endl; // Output the result
    }

    return 0;
}

```