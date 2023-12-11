# 1035 - Teste de Seleção 1

Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão escrever "Valores nao aceitos".

[Teste de Seleção 1 - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1035)

# Solução

```
#include <iostream>
using namespace std;

int main() {
    
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    
    // Verificações individuais para maior clareza
    bool condicao1 = B > C;
    bool condicao2 = D > A;
    bool somaCD_maior_AB = (C + D) > (A + B);
    bool CD_positivos = C > 0 && D > 0;
    bool A_par = A % 2 == 0;

    // Verifica todas as condições
    if(condicao1 && condicao2 && somaCD_maior_AB && CD_positivos && A_par) {
        cout << "Valores aceitos" << endl;
    } else {
        cout << "Valores nao aceitos" << endl;
    }
    return 0;
}
```