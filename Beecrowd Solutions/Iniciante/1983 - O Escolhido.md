# 1983 - O Escolhido

Para selecionar o melhor, eles têm disponível uma lista com o número de inscrição de cada aluno e a sua respectiva nota na disciplina. Sua tarefa é ajudar o pessoal do MEC a encontrar o aluno mais apto a representar a instituição e quem sabe garantir sua vaga. Só tem um detalhe, se a nota mais alta não for maior ou igual a 8, você deverá imprimir “Minimum note not reached”.

[O Escolhido - Beecrowd](https://judge.beecrowd.com/pt/problems/view/1983)

# Solução

```
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n; // Number of students
    cin >> n;

    int bestStudent = -1; // To store the registration number of the best student
    double highestGrade = 0.0; // To store the highest grade

    for (int i = 0; i < n; ++i) {
        int registrationNumber;
        double grade;
        cin >> registrationNumber >> grade;

        // Check if this student has the highest grade so far
        if (grade > highestGrade) {
            highestGrade = grade;
            bestStudent = registrationNumber;
        }
    }

    // Output
    if (highestGrade >= 8.0) {
        cout << bestStudent << endl;
    } else {
        cout << "Minimum note not reached" << endl;
    }

    return 0;
}

```