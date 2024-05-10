# Arrays - DS

https://www.hackerrank.com/challenges/arrays-ds/problem?isFullScreen=true

# Solutions

```
vector<int> reverseArray(vector<int> a) {
    vector<int> b(a.size());
    int i = 0, j = a.size() - 1;
   
    for(; i < a.size(), j >= 0; i++, j--){
        b[i] = a[j]; 
    } 
   return b;
}
```

or

```
vector<int> reverseArray(vector<int> a) {
    vector<int> b(a.size());
    for(int i = 0; i < a.size(); ++i)
        b[i] = a[a.size() - 1 - i];
        
    return b;
}
```