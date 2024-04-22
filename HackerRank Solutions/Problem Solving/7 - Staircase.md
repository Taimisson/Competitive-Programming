# Staircase

Its base and height are both equal to . It is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size 

[Staircase - HackerRank](https://www.hackerrank.com/challenges/staircase/problem?isFullScreen=true)

# Solution I

```
void staircase(int n)
{
    string s="";
    for(int i = 0; i < n; ++i)
    {
        s+='#';
        cout<< setw(n) << right << s << "\n";
    }
}
```

# Solution II

```
void staircase(int n) {
    for(int i = 1; i <= n; i++){ // Loop externo: percorre cada linha da escada
        for(int j = 1; j <= n; j++){ // Loop interno: percorre cada coluna da linha atual
            if(j <= n - i) 
                cout << " "; // Imprime um espaço se estiver na "área de espaço"
            else 
                cout << "#"; // Caso contrário, imprime um '#'
        }
        cout << endl; // Quebra de linha após completar uma linha da escada
    }
}
```