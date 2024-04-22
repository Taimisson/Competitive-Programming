# Save the Prisoner!

The jailer is playing a little joke, though. The last piece of candy looks like all the others, but it tastes awful. Determine the chair number occupied by the prisoner who will receive that candy.

[Save the Prisoner! - HackerRank](https://www.hackerrank.com/challenges/save-the-prisoner/problem?isFullScreen=true)

# Solution

```
int saveThePrisoner(int prisoners, int sweets, int start) {
    int res = (start - 1 + sweets) % prisoners;
    return res == 0 ? prisoners : res;
}
```

