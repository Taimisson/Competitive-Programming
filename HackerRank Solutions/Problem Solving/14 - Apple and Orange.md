# Apple and Orange

Sam's house has an apple tree and an orange tree that yield an abundance of fruit. Using the information given below, determine the number of apples and oranges that land on Sam's house.

[Apple and Orange - HackerRank](https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=true)

# Solution

```
void countApplesAndOranges(int startHouse, int endHouse, int appleTree, int orangeTree, vector<int> apples, vector<int> oranges) {
    int appleCount = 0, orangeCount = 0, range;
    
    for(int i = 0; i < apples.size(); ++i){
        range = appleTree + apples[i];
        if(range >= startHouse && range <= endHouse)
            appleCount++;
    }
    
    for(int i = 0; i < oranges.size(); ++i){
        range = orangeTree + oranges[i];
        if(range >= startHouse && range <= endHouse)
            orangeCount++;
    }
    
    cout << appleCount << "\n" << orangeCount << "\n";
}
```