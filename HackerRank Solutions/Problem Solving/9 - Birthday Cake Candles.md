# Birthday Cake Candles

You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. Count how many candles are tallest.

[Birthday Cake Candles - HackerRank](https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true)

# Solution

```
int birthdayCakeCandles(vector<int> candles) {
    int max = *max_element(candles.begin(), candles.end());
    int answ = 0;
    
    for(int i = 0; i < candles.size(); ++i)
        if(max == candles[i])
            answ++;
    
    return answ;
}
```