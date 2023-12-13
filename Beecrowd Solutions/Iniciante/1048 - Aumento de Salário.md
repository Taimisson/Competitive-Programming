# 1048 - Aumento de Salário

A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:

Salário	Percentual de Reajuste
0 - 400.00          15%
400.01 - 800.00     12%
800.01 - 1200.00    10%
1200.01 - 2000.00   7%
Acima de 2000.00    4%

Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.

[Aumento de Salário - Beecrowd](https://www.beecrowd.com.br/judge/pt/problems/view/1048)

# Solução

```
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    double salario, salarioNovo, porcentual;
    cin >> salario;
    
    if(salario <= 400){
        salarioNovo = (0.15 * salario) + salario;
        porcentual = 15;
    }else if(salario <= 800){
        salarioNovo = (0.12 * salario) + salario;
        porcentual = 12;
    }else if(salario <= 1200){
        salarioNovo = (0.10 * salario) + salario;
        porcentual = 10;
    }else if(salario <= 2000){
        salarioNovo = (0.07 * salario) + salario;
        porcentual = 7;
    }else{
        salarioNovo = (0.04 * salario) + salario;
        porcentual = 4;
    }
        
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << salarioNovo << "\n" << "Reajuste ganho: " << salarioNovo - salario << "\n";
    cout << fixed << setprecision(0);
    cout << "Em percentual: " << porcentual << " %"<< endl;
}
```