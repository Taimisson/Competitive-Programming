# The Hurdle Race

A video player plays a game in which the character competes in a hurdle race. Hurdles are of varying heights, and the characters have a maximum height they can jump. There is a magic potion they can take that will increase their maximum jump height by  unit for each dose. How many doses of the potion must the character take to be able to jump all of the hurdles. If the character can already clear all of the hurdles, return .

[The Hurdle Race - HackerRank](https://www.hackerrank.com/challenges/the-hurdle-race/problem?isFullScreen=true)

# Solution

```
int hurdleRace(int k, vector<int> height) {
    sort(height.begin(), height.end());
    
    int doses = height[height.size() - 1] - k;
    if(doses <= 0) return 0;
    else return doses;   
}
```