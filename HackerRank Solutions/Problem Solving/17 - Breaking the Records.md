# Breaking the Records

Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. She tabulates the number of times she breaks her season record for most points and least points in a game. Points scored in the first game establish her record for the season, and she begins counting from there.

[Breaking the Records - HackerRank](https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem?isFullScreen=true)

# Solution

```
vector<int> breakingRecords(vector<int> scores) {
    int maxScore = scores[0];
    int minScore = scores[0];
    int countMax = 0;
    int countMin = 0;

    for (int i = 1; i < scores.size(); i++) {
        if (scores[i] > maxScore) {
            maxScore = scores[i];
            countMax++;
        }
        if (scores[i] < minScore) {
            minScore = scores[i];
            countMin++;
        }
    }

    return vector<int>{countMax, countMin};
}
```