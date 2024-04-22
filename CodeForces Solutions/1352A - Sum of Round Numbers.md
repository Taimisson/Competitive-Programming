# 1352A	Sum of Round Numbers

https://codeforces.com/problemset/problem/1352/A

# Solution

```
#include <iostream>
#include <vector>
using namespace std;

// Function to solve a single test case.
void solve(int n) {
    vector<int> rounds; // To store the round numbers.
    int power = 1; // To keep track of the current power of 10.

    // While there are digits in n.
    while (n > 0) {
        int digit = n % 10; // Get the last digit.
        if (digit > 0) {
            // If digit is not zero, calculate the round number it represents.
            rounds.push_back(digit * power);
        }
        n /= 10; // Remove the last digit from n.
        power *= 10; // Increase the power of 10 for the next digit.
    }

    // Output the results.
    cout << rounds.size() << endl;
    for (int round : rounds) {
        cout << round << " ";
    }
    cout << endl;
}

int main() {
    int t, n;
    cin >> t; // Read the number of test cases.

    while (t--) {
        cin >> n; // Read the number n for each test case.
        solve(n); // Solve the test case.
    }

    return 0;
}
```