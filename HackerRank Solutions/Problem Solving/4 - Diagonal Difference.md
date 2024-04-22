# Diagonal Difference

Given a square matrix, calculate the absolute difference between the sums of its diagonals.

[Diagonal Difference - HackerRank](https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true)

# Solution

```
int diagonalDifference(vector<vector<int>> arr) {
    int firstDiagonal = 0, secondDiagonal = 0;

    for(auto i = 0; i < arr.size(); i++){
        firstDiagonal += arr[i][i];
        secondDiagonal += arr[i][arr.size() - i - 1];
    }

    return abs(firstDiagonal - secondDiagonal);
}
```

