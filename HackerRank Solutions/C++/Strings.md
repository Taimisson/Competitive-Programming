# Strings

https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true

# Solution

```
int main() {
    
    string a, b;
    cin >> a >> b;
    
    cout << a.length() << " " << b.length() << "\n";
    cout << a + b << "\n";
    char copy = a[0]; // saving char
    a[0] = b[0];
    b[0] = copy;
    cout << a << " " << b;
    
    return 0;
}
```

## XOR Solution

```
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    // Lendo duas strings do usuário
    cin >> a;
    cin >> b;

    // Exibindo o tamanho das strings
    cout << a.size() << " " << b.size();
    // Concatenando e exibindo as duas strings
    cout << endl << a + b;

    // Trocando os primeiros caracteres de 'a' e 'b'
    // usando operações XOR
    a[0] ^= b[0]; // Passo 1: a[0] se torna a[0] XOR b[0]
    b[0] ^= a[0]; // Passo 2: b[0] se torna b[0] XOR novo a[0] (que é a[0] XOR b[0])
    a[0] ^= b[0]; // Passo 3: a[0] se torna a[0] XOR b[0] (que agora é o original a[0])

    // Exibindo as strings modificadas
    cout << endl << a << " " << b;

    return 0;
}
```