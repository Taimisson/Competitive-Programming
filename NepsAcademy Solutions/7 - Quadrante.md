# Quadrante

# Solução em C
```
#include <stdio.h>

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    
    if(x == 0 || y == 0)
        printf("eixos");
    else if(x > 0 && y > 0)
        printf("Q1");
    else if(x > 0 && y < 0)
        printf("Q4");
    else if(x < 0 && y > 0)
        printf("Q2");
    else if(x < 0 && y < 0)
        printf("Q3");
    
    return 0;
}
```

# Solução em C++
```
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    
    if(x == 0 || y == 0)
        cout << "eixos";
    else if(x > 0 && y > 0)
        cout << "Q1";
    else if(x > 0 && y < 0)
        cout << "Q4";
    else if(x < 0 && y > 0)
        cout << "Q2";
    else if(x < 0 && y < 0)
        cout << "Q3";
    

    return 0;
}
```