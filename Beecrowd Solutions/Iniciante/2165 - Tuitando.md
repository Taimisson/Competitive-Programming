# 2165 - Tuitando

O microblog Twitter é conhecido por limitar as postagens em 140 caracteres. Conferir se um texto vai caber em um tuíte é sua tarefa.

[Tuitando - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2165)

# Solução

```
#include <iostream>
#include <string>

int main() {
    std::string T;
    std::getline(std::cin, T); // Lê a linha de texto inteira, incluindo espaços.

    if(T.length() <= 140) {
        std::cout << "TWEET\n";
    } else {
        std::cout << "MUTE\n";
    }

    return 0;
}
```
