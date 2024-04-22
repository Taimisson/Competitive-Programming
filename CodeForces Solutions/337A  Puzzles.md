# 337A - Puzzles

https://codeforces.com/problemset/problem/337/A

# Solution

```
#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> puzzlePieces(m);

    for (int i = 0; i < m; i++) {
        std::cin >> puzzlePieces[i];
    }

    // Sorting the puzzle pieces in ascending order
    std::sort(puzzlePieces.begin(), puzzlePieces.end());

    int minDifference = 1001; // Max possible difference + 1

    // Sliding window approach
    for (int i = 0; i <= m - n; i++) {
        int currentDifference = puzzlePieces[i + n - 1] - puzzlePieces[i];
        if (currentDifference < minDifference) {
            minDifference = currentDifference;
        }
    }

    std::cout << minDifference << std::endl;

    return 0;
}

```