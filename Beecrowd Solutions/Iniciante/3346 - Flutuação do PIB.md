# 3346 - Flutuação do PIB

O Sul é uma das regiões que mais contribuem para o Produto Interno Bruto (PIB) do Brasil. No entanto, devido à pandemia de COVID-19, a economia nos três estados do Sul foi muito afetada. Alice, uma pesquisadora da Universidade do Sul, coletou dados sobre a flutuação do PIB de toda a região Sul em cada um dos dois últimos anos. Cada flutuação é expressa por uma porcentagem, de modo que uma porcentagem positiva indica crescimento naquele período de um ano, enquanto que uma porcentagem negativa indica decrescimento.

Bob, um político, dará uma entrevista à imprensa amanhã. Com base nos dois valores coletados por Alice, Bob deseja calcular a flutuação do PIB correspondente ao período todo dos dois anos analisados, para não falar besteira na entrevista.

[Flutuação do PIB - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/3346)

```
#include <iostream>
using namespace std;
int main() {
    double a, b;
    cin >> a >> b;
    double flutuacao_total = (((1.0 + a / 100.0) * (1.0 + b / 100.0)) - 1.0) * 100.0;
    printf("%.6lf\n", flutuacao_total);  
}
```