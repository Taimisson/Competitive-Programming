# 1847 - Bem-vindos e Bem-vindas ao Inverno!

O inverno é uma estação maravilhosa, não é mesmo? Todos nós amamos vestir um poncho, participar de uma roda de chimarrão, assar pinhões no fogão a lenha… Mas nem todos gostam do inverno, especialmente em lugares onde o inverno costuma ser muito cruel. Em Westeros, por exemplo, o humor das pessoas é definido de acordo com as tendências climáticas. Com base nas temperaturas dos três últimos dias, as pessoas podem ficar tristes ou felizes, ficando mais propensas a fazer guerra ou fazer amor, respectivamente. E, sejamos sinceros, é justamente por causa das cenas de amor e de guerra que amamos Game of Thrones!

[Bem-vindos e Bem-vindas ao Inverno! - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1847)

# Solução

```
#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    if (B < A && C >= B) cout << ":)" << endl;
    else if (B > A && C <= B) cout << ":(" << endl;
    else if (B > A && C > B && (C - B) < (B - A)) cout << ":(" << endl;
    else if (B > A && C > B && (C - B) >= (B - A)) cout << ":)" << endl;
    else if (B < A && C < B && (B - C) < (A - B)) cout << ":)" << endl;
    else if (B < A && C < B && (B - C) >= (A - B)) cout << ":(" << endl;
    else if (B == A && C > B) cout << ":)" << endl;
    else if (B == A && C < B) cout << ":(" << endl;
    else cout << ":(" << endl;

    return 0;
}

```