# Sumário

- O que é um vetor?
- Para que serve um vetor?
- Vetores em C
- Como acessar os elementos de um vetor?
- Como atribuir valores aos elementos de um vetor?
- Como ler os elementos de um vetor?
- Exemplo

# O que é um vetor?

Vetores armazenam um conjunto de variáveis.

Em C, os vetores são homogêneos. Isto é, as variáveis armazenadas por um vetor são todas do mesmo tipo.

# Para que serve um vetor?

Um vetor serve, no geral, para criarmos várias variáveis de um mesmo tipo de uma maneira simples.

Também podemos utilizar vetores para automatizar tarefas.

# etores em C

A declaração de um vetor em C segue o template abaixo:
```
<tipo> <nome>[<tamanho>];
```

Para facilitar o entendimento, analise o exemplo abaixo:
```
/*
    tipo -> int (armazena inteiros)
    nome -> vetor
    tamanho -> 3 (armazena três elementos)
*/

int vetor[3];
```