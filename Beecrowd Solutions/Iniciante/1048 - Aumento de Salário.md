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

// Outro caso
```
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

double calculateNewSalary(double salario) {
    const double brackets[] = {400, 800, 1200, 2000};
    const double percentages[] = {0.15, 0.12, 0.10, 0.07, 0.04};

    for (int i = 0; i < 5; ++i) {
        if (i == 4 || salario <= brackets[i]) {
            return salario * (1 + percentages[i]);
        }
    }

    return salario; // In case none of the conditions are met
}

int main(){
    double salario;
    cin >> salario;

    double salarioNovo = calculateNewSalary(salario);
    double reajuste = salarioNovo - salario;
    double porcentual = (reajuste / salario) * 100;

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << salarioNovo << "\nReajuste ganho: " << reajuste << "\n";
    cout << fixed << setprecision(0);
    cout << "Em percentual: " << porcentual << " %" << endl;

    return 0;
}
```