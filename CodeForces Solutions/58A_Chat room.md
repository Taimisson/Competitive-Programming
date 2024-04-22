# 58A	Chat room

https://codeforces.com/problemset/problem/58/A

# Solution

```
#include <iostream>
#include <string>

using namespace std;

bool canSayHello(const string& s) {
    string hello = "hello";
    int j = 0; // Índice para a palavra "hello"

    // Percorre cada caractere da string s
    for (int i = 0; i < s.length() && j < hello.length(); ++i) {
        // Se o caractere em s corresponde ao caractere atual em "hello", avança para o próximo caractere em "hello"
        if (s[i] == hello[j])
            j++;
    }

    // Retorna verdadeiro se todos os caracteres de "hello" foram encontrados na ordem correta
    return j == hello.length();
}

int main() {
    string s;
    cin >> s; // Lendo a palavra de entrada

    // Imprime "YES" se Vasya conseguiu dizer "hello", caso contrário imprime "NO"
    cout << (canSayHello(s) ? "YES" : "NO") << endl;

    return 0;
}

```