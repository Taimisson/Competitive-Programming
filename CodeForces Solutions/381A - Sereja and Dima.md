# 381A - Sereja and Dima

https://codeforces.com/problemset/problem/381/A

# Solution

```
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> cards(n);
    for(int i = 0; i < n; ++i)
        cin >> cards[i];
        
    int serejaPoints = 0, dimaPoints = 0;
    int left = 0, right = n - 1;
    bool serejaTurn = true;
    
    while(left <= right){
        int chosenCard;
        if(cards[left] > cards[right])
        {
            chosenCard = cards[left];
            left++;
        }
        else
        {
            chosenCard = cards[right];
            right--;
        }
        
        if(serejaTurn)
        {
            serejaPoints += chosenCard;
            serejaTurn = false;
        }
        else
        {
            dimaPoints += chosenCard;
            serejaTurn = true;
        }
    }
    
    cout << serejaPoints << " " << dimaPoints << endl;
    
    return 0;
    
}
```
