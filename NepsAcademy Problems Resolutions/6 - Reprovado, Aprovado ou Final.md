# Reprovado, Aprovado ou Final.

Bino obteve média N1 na primeira etapa do semestre e média N2 na segunda etapa do semestre. Bino não sabe sua situação e quer sua ajuda para saber se ele está aprovado, reprovado ou de prova final.

A nota final de Bino é calculada utilizando uma média ponderada onde o peso da N1 é 2 e o peso da N2 é 3. Caso a média final seja maior ou igual a 7, Bino está aprovado. Caso a média seja menor que 3, Bino está reprovado. Caso Bino não esteja reprovado ou aprovado, Bino terá que fazer a prova final.

Faça um programa para ler as duas notas de Bino e imprima qual sua situação.

- Entrada

A entrada consiste de duas linhas. A primeira linha contém um real representando a nota N1. A segunda linha contém um real representando a nota N2.

- Saída

A saída consiste de uma linha. Caso Bino esteja aprovado, imprima "Aprovado". Caso Bino esteja reprovado, imprima "Reprovado". Caso Bino não esteja reprovado ou aprovado, imprima "Final".

- Restrições

0.0≤N1,N2≤10.0

Exemplos de Entrada  |  Exemplos de Saída

        2
        2                  Reprovado
        10
        8                  Aprovado
        5
        7                  Final

# Solução em C
```
#include <stdio.h>

int main() {
    float n1, n2;
   	scanf("%f%f", &n1, &n2);
    
    float mediaf = (n1 * 2 + n2 *3)/5;
    
    if(mediaf >= 7)
       	printf("Aprovado");
    else if(mediaf < 3)
        printf("Reprovado");
    else
        printf("Final");

    return 0;
}
```
# Solução em C++
```
#include <iostream>
using namespace std;

int main() {
    float n1, n2;
    cin >> n1 >> n2;
    
    float mediaf = (n1 * 2 + n2 *3)/5;
    
    if(mediaf >= 7)
        cout << "Aprovado";
    else if(mediaf < 3)
        cout << "Reprovado";
    else
        cout << "Final";

    return 0;
}
```