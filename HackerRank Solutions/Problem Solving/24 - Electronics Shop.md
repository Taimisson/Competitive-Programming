# Electronics Shop

A person wants to determine the most expensive computer keyboard and USB drive that can be purchased with a give budget. Given price lists for keyboards and USB drives and a budget, find the cost to buy them. If it is not possible to buy both items, return .

[Electronics Shop - HackerRank](https://www.hackerrank.com/challenges/electronics-shop/problem?isFullScreen=true)

# Solution

```
int getMoneySpent(vector<int> keyboards, vector<int> drives, int budget) {
    int mostExpensive = -1;
    
    sort(keyboards.begin(), keyboards.end());
    sort(drives.begin(), drives.end());
    
    for(int i = 0; i < keyboards.size(); ++i){
        for(int j = 0; j < drives.size(); ++j){
            int sum = keyboards[i] + drives[j];
            if(sum > budget) break;
            if(sum > mostExpensive) mostExpensive = sum;
        }
    }
        
    return mostExpensive;
}
```

# Binary Search

```
int getMoneySpent(std::vector<int> keyboards, std::vector<int> drives, int b) {
    int mostExpensive = -1;

    // Ordena os drives para a busca binária
    std::sort(drives.begin(), drives.end());

    for(int keyboard : keyboards) {
        if(keyboard >= b) continue; // Ignora teclados mais caros que o orçamento

        // Busca binária para encontrar o drive mais caro dentro do orçamento
        int start = 0, end = drives.size() - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (keyboard + drives[mid] <= b) {
                mostExpensive = std::max(mostExpensive, keyboard + drives[mid]);
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }

    return mostExpensive;
}
```