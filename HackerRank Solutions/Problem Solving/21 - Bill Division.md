# Bill Division

Two friends Anna and Brian, are deciding how to split the bill at a dinner. Each will only pay for the items they consume. Brian gets the check and calculates Anna's portion. You must determine if his calculation is correct.

[Bill Division - HackerRank](https://www.hackerrank.com/challenges/bon-appetit/problem?isFullScreen=true)

# Solution
```
void bonAppetit(vector<int> bill, int k, int AnnaPaid) {
    double sum = 0;
    for(int i = 0; i < bill.size(); ++i)
        if(i != k) sum+= bill[i];
    
    double billDivided = sum / 2;
    if(billDivided - AnnaPaid == 0)
        cout << "Bon Appetit" << "\n";
    else
        cout << AnnaPaid - billDivided << "\n";
}
```