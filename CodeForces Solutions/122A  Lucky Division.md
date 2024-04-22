# 122A	Lucky Division

https://codeforces.com/problemset/problem/122/A

# Solution

```
#include <iostream>
using namespace std; 

// Função que verifica se um número é sortudo
bool isLucky(int number) {
    while (number > 0) { 
        int digit = number % 10; // Obtém o último dígito do número
        if (digit != 4 && digit != 7)  // Verifica se o dígito não é 4 ou 7
            return false; 
        
        number /= 10; // Remove o último dígito do número
    }
    return true; // Se todos os dígitos forem sortudos, retorna verdadeiro
}

// Função que verifica se um número é quase sortudo
bool isAlmostLucky(int n) {
    for (int i = 4; i <= n; ++i) // Itera sobre todos os números de 4 até n
        if (isLucky(i) && (n % i == 0))  // Verifica se i é sortudo e se n é divisível por i
            return true; // Se encontrar um divisor sortudo, retorna verdadeiro
            
    return false; 
}

// Função principal
int main() {
    int n; 
    cin >> n; 
    
    if (isAlmostLucky(n)) cout << "YES" << endl;
    else cout << "NO" << endl;

}

```