# 1837 - Prefácio

Começou a 4ạ Maratona de Programação da UFFS! Esperamos que você aproveite as próximas horas que passará conosco e que se divirta muito! Boa sorte!

Este é o 3ọ ano do Clube de Programação, projeto de extensão que visa em primeiro lugar tornar os programadores da região brasileira conhecida como Fronteira Sul muito mais aptos a enfrentar os desafios computacionais tanto da academia quanto do mercado do trabalho. Nossa principal estratégia está em promover oficinas e treinos para competições de Programação, não apenas para estudantes da UFFS, mas para quem quiser participar. Apesar das várias dificuldades, estamos muito felizes com os resultados que temos conquistado. Em parceria com a UNOCHAPECÓ, a URI e a UNOESC, colaboramos para fazer de Chapecó nos dois últimos anos a 2ª maior sede do Brasil na etapa regional da Maratona de Programação, o que é mais um indicador do entusiasmo que o povo daqui tem por Programação.

Para aquecer você para esta competição, vamos pedir que você desenvolva um programa que calcule o quociente e o resto da divisão de dois números inteiros, pode ser? Lembre que o quociente e o resto da divisão de um inteiro a por um inteiro não-nulo b são respectivamente os únicos inteiros q e r tais que 0 ≤ r < |b| e:

a = b × q + r

Caso você não saiba, o teorema que garante a existência e a unicidade dos inteiros q e r é conhecido como ‘Teorema da Divisão Euclidiana’ ou ‘Algoritmo da Divisão’.

[Prefácio - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1837)

# Solução

```
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, q, r;

    cin >> a >> b;

    // Divisão euclidiana
    if (a < 0) {
        r = abs(b) - abs(a % b);
        q = (a - r) / b;
        if (a % b == 0) {
            r = 0;
            q = a / b;
        }
    } else {
        q = a / b;
        r = a % b;
    }
    cout << q << " " << r << endl;

    return 0;
}
```