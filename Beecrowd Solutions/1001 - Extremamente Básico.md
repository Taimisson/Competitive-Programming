# 1001 - Extremamente Básico

Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A e B atribuindo o seu resultado na variável X. Imprima X conforme exemplo apresentado abaixo. Não apresente mensagem alguma além daquilo que está sendo especificado e não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".

[Extremamente Básico - BeeCrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1001)

# Solução
```
#include <iostream>
using namespace std;

int main() {
    int A, B; 
    cin >> A >> B; 
    cout << "X = " << A+B << endl;
    
    return 0;
}
```