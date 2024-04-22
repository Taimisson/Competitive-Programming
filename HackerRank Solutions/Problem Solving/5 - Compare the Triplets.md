# Compare the Triplets

Comparison points is the total points a person earned.
Given a and b, determine their respective comparison points.

[Compare the Triplets - HackerRank](https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true)\

# Solution

```
/*
 * Complete the 'compareTriplets' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> points(2);
    
    for(int i = 0; i < 3; ++i){
        if(a[i] > b[i])
            points[0]++;
        else if(b[i] > a[i])
            points[1]++;
    }
    return points;
}
```