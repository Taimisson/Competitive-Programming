# Angry Professor

Given the arrival time of each student and a threshhold number of attendees, determine if the class is cancelled.

[Angry Professor - HackerRank](https://www.hackerrank.com/challenges/angry-professor/problem?isFullScreen=true)

# Solution

```
string angryProfessor(int minimo, vector<int> alunos) {
    int naoAtrasados = 0;
    for(int horario : alunos)
        if(horario <= 0)
            naoAtrasados++;
    
    if(naoAtrasados < minimo) return "YES";
    else return "NO";

}
```