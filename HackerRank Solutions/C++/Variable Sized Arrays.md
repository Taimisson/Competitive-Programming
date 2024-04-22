## Variable Sized Arrays

https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true

# Solution
```
int main() {
    int n;
    int q;
    cin >> n >> q;
    
    vector<vector<int>> arr(n);
    
    for(int i = 0; i < n; i++){
        int k; 
        cin >> k;
        arr[i].resize(k);
        for(int j = 0; j < k; j++)
            cin >> arr[i][j];
    }
    
    for(int i = 0; i < q; i++){
        int x, y;
        cin >> x >> y;
        cout << arr[x][y] << endl;
    }
    
    return 0;
}
```