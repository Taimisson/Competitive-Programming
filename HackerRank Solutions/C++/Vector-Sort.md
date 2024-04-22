# Vector-Sort

https://www.hackerrank.com/challenges/vector-sort/problem?isFullScreen=true

# Solution

```
int main() {
    int n; 
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; ++i)
        cin >> v[i]; 
        
    sort(v.begin(), v.end());
    
    for(int num : v)
        cout << num << " ";
    
    return 0;
}
```