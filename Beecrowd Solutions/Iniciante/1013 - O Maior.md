# 1013 - O Maior

Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. 

[O Maior - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1013)

# Solução 

```
#include <iostream>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    if (A >= B && A >= C)
        cout << A << " eh o maior" << endl;
    else if (B >= A && B >= C)
        cout << B << " eh o maior" << endl;
    else
        cout << C << " eh o maior" << endl;

    return 0;
}
```