# Sumário

- O que é?
- Fases da compilação
- Casos de erro

# O que é um compilador?

Compilador, como o próprio nome já diz, é o programa que sintetiza um código escrito em uma linguagem de programação para uma linguagem de máquina. Isto é, após finalizar o código, caso ele esteja correto de acordo com as regras da linguagem de programação, o compilador transforma o código em um programa, um arquivo executável.

PS: um compilador também pode ser um programa que traduz um código de uma linguagem de programação para outra 😉.

# Fases de compilação

Para verificar se o código está correto, o processo de compilação geralmente é divido em três partes:

- Análise léxica: o compilador verifica se o código utiliza os símbolos da linguagem.
Ex: na frase "Eu joguei bola" todas as palavras estão em português, então a frase está correta lexicograficamente.
- Análise sintática: o compilador verifica se o código foi escrito corretamente.
- Análise semântica: o compilador verifica se o código tem significado lógico.
Ex: na frase "joguei Eu bola", todas as palavras estão em português e escritas corretamente, porém a sentença não faz sentido nenhum. Dessa forma, apesar de ela estar correta quanto a lexicografia e a sintática, não está correta semânticamente.

# Erros

Se em alguma das fases da compilação seja encontrado algum erro no código, uma das principais tarefas do compilador é retornar um relatório de erros para o programador que o auxilie a corrigi-los rapidamente.