# Subarray Division

Two children, Lily and Ron, want to share a chocolate bar. Each of the squares has an integer on it.

Lily decides to share a contiguous segment of the bar selected such that:

The length of the segment matches Ron's birth month, and,
The sum of the integers on the squares is equal to his birth day.
Determine how many ways she can divide the chocolate.

[Subarray Division - HackerRank](https://www.hackerrank.com/challenges/the-birthday-bar/problem?isFullScreen=true)

# Solution

```
int birthday(vector<int> s, int day, int month) {
    int ans = 0;
    int windowSum = 0;

    // Primeiro, soma os primeiros 'month' (2) elementos
    for(int i = 0; i < 2; i++) {
        windowSum += s[i]; // windowSum = 1 + 2 = 3
    }

    // Verifica se esta soma inicial já é uma solução
    if(windowSum == 3) {
        ans++; // ans = 1, pois 3 é igual ao dia de aniversário
    }

    // Agora, move a janela ao longo do vetor
    for(int i = 2; i < 5; i++) {
        windowSum += s[i] - s[i - 2]; // Adiciona o próximo elemento e subtrai o primeiro elemento da janela anterior

        // Verifica se a soma atual é igual a 'day' (3)
        if(windowSum == 3) {
            ans++; // Incrementa ans se a condição for verdadeira
        }
    }

    return ans;
}
```