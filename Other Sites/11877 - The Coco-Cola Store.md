# 11877 - The Coco-Cola Store

# Solution
```
#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        int total_bebidas = 0;
        while (n >= 3) {
            int troca = n / 3;
            total_bebidas += troca;
            n = n % 3 + troca;
        }
        if (n == 2) {
            total_bebidas += 1;
        }
        cout << total_bebidas << endl;
    }
    return 0;
}
```