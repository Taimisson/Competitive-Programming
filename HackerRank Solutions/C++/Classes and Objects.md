# Classes and Objects

https://www.hackerrank.com/challenges/classes-objects/problem

# Soluion

```
#include <iostream>
#include <vector>
using namespace std;

// Definição da classe Student
class Student {
    vector<int> scores;  // Vetor para armazenar as notas dos alunos

public:
    // Função para ler e armazenar as notas dos alunos
    void input() {
        for (int i = 0; i < 5; i++) {
            int score;
            cin >> score;  // Lê uma nota do teclado
            scores.push_back(score);  // Armazena a nota no vetor
        }
    }

    // Função para calcular a pontuação total do aluno
    int calculateTotalScore() {
        int total = 0;  // Inicializa a pontuação total
        for (int score : scores) {
            total += score;  // Soma todas as notas
        }
        return total;  // Retorna a pontuação total
    }
};

int main() {
    int n; // Número de alunos
    cin >> n;
    Student *s = new Student[n]; // Cria um array de objetos Student

    // Lê as notas para cada aluno
    for (int i = 0; i < n; i++) {
        s[i].input();  // Lê as notas do i-ésimo aluno
    }

    // Calcula a pontuação total de Kristen (primeiro aluno)
    int kristen_score = s[0].calculateTotalScore();

    // Conta quantos alunos têm pontuação maior que a de Kristen
    int count = 0;
    for (int i = 1; i < n; i++) {
        int total = s[i].calculateTotalScore(); // Calcula a pontuação total do i-ésimo aluno
        if (total > kristen_score) {
            count++;  // Incrementa o contador se o aluno tem pontuação maior que Kristen
        }
    }

    // Imprime o número de alunos com pontuação maior que a de Kristen
    cout << count;

    delete[] s; // Libera a memória alocada para o array de alunos
    return 0;
}

```