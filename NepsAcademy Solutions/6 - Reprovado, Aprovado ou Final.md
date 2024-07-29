# Reprovado, Aprovado ou Final.


# Solução em C
```
#include <stdio.h>

int main() {
    float n1, n2;
   	scanf("%f%f", &n1, &n2);
    
    float mediaf = (n1 * 2 + n2 *3)/5;
    
    if(mediaf >= 7)
       	printf("Aprovado");
    else if(mediaf < 3)
        printf("Reprovado");
    else
        printf("Final");

    return 0;
}
```
# Solução em C++
```
#include <iostream>
using namespace std;

int main() {
    float n1, n2;
    cin >> n1 >> n2;
    
    float mediaf = (n1 * 2 + n2 *3)/5;
    
    if(mediaf >= 7)
        cout << "Aprovado";
    else if(mediaf < 3)
        cout << "Reprovado";
    else
        cout << "Final";

    return 0;
}
```