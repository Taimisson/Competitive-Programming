# Between Two Sets

There will be two arrays of integers. Determine all integers that satisfy the following two conditions:

The elements of the first array are all factors of the integer being considered
The integer being considered is a factor of all elements of the second array
These numbers are referred to as being between the two arrays. Determine how many such numbers exist.

[Between Two Sets - HackerRank](https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=true)

# Solution
```
int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);   
}

int lcm(int a, int b){
    return (a / gcd(a, b) * b);
}

int getTotalX(vector<int> a, vector<int> b) {
    int l = a[0];
    for(int i = 1; i < a.size(); ++i)
        l = lcm(l, a[i]);
        
    int g = b[0];
    for(int i = 1; i < b.size(); ++i)
        g = gcd(g, b[i]);
        
    int count = 0;
    for(int i = l; i <= g; i+= l)
        if(g % i == 0)
            count++;
            
    return count;
}

```