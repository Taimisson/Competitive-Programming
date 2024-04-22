# 231A	Team

https://codeforces.com/problemset/problem/231/A

# Solution

```
#include <bits/stdc++.h>
using namespace std;

void solve(int n){
	int x,y,z, sum = 0;

	for(int i = 0; i < n; i++){
		cin >> x >> y >> z;
		if( x + y + z > 1)
			sum++;
	}
	cout << sum << "\n";
}

int main(){ 
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	int n;
	cin >> n;

	solve(n);
		
}
```