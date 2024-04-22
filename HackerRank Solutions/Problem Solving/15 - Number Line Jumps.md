# Number Line Jumps

You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity).

[Number Line Jumps - HackerRank](https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true)

# Solution

```
string kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 == v2) 
        if (x1 == x2)
            return "YES";
        else 
            return "NO";
    else if ((x2 - x1) % (v1 - v2) == 0 && (x2 - x1) / (v1 - v2) >= 0)
        return "YES";
    else 
        return "NO";
}
```