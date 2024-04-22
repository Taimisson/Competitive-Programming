# Plus Minus

Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with  places after the decimal.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to  are acceptable.

[Plus Minus - HackerRank](https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true)

# Solution

Using for_each and lambda function

```
void plusMinus(vector<int> arr) {
    int positive = 0, negative = 0, zero = 0;
    for_each(arr.begin(), arr.end(), [&](int num){
        if(num > 0) positive++;
        else if(num < 0) negative++;
        else zero++;
    });
    
    int arrlen = arr.size();
    cout << fixed << setprecision(6);
    cout << (double) positive / arrlen << "\n";
    cout << (double) negative / arrlen << "\n";
    cout << (double) zero / arrlen << "\n";
}
```