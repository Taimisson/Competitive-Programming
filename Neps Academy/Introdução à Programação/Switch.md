# Sumário

- Exemplo de problema
- Estrutura de decisão switch

# Exemplo de problema

Uma loja tem 4 itens no estoque: papel, tesoura, cola e caneta. Cada item tem um identificador: 1-papel, 2-tesoura, 3-cola e 4-caneta. Faça um programa que leia um inteiro representando o identificador do item e imprima qual o item correspondente.

Para resolver este problema, temos as seguintes 2 opções:
- Fazer quatro if's(ou if-else if) para testar cada um dos identificadores.

```
if( identificador == 1 ){
    printf("Papel\n");
}

if( identificador == 2 ){
    printf("Tesoura\n");
}

if( identificador == 3 ){
    printf("Cola\n");
}

if( identificador == 4 ){
    printf("Caneta\n");
}
```

Observação: tome cuidado ao utilizar o comando else nesse caso, pois, se o usuário digitar um identificador inválido, seu programa talvez execute o código contido dentro dele.

- Utilizar a estrutura switch para testar cada um dos identificadores.

# Estrutura de decisão switch

Para utilizar a segunda opção apresentada, precisaremos aprender o que é e como utilizar a estrutura switch.

É uma estrutura que especifica ações para caso uma variável tenha valor igual a algum valor específico.

Essa estrutura segue o template abaixo:

```
switch( variavel ){
    case valor1:
        // comandos
        break;
    case valor2:
        // comandos
        break;
    default:
        // comandos
}
```

Na estrutura acima, primeiro especificamos a variável a ser testada e depois delimitamos o escopo da estrutura utilizando chaves, assim como fizemos com os if's e else's.

Dentro das chaves, teremos os testes sendo representados pela palavra-chave "case", seguido pelo valor a ser testado e por dois pontos("😊.

Dessa forma, caso a variável tenha valor igual ao valor1, execute determinado código e encerre o funcionamento da estrutura (isso é feito utilizando o comando break, que será visto posteriormente no curso, mas, resumidamente, representa uma parada o funcionamento da estrutura que o contém).

Caso a variável tenha valor igual ao valor2, o mesmo será realizado (perceba que isso só será testado se a estrutura não foi encerrada no caso anterior).

Caso a estrutura não tenha sido interrompida em alguma marcação case, então o código contido dentro da marcação default será executado(perceba que aqui já não é necessário o comando break, estamos no final da estrutura).

Observações:

- Sem o comando break, todos os valores seriam testados, mesmo com a variável analisada já tendo se correspondido com algum valor. Dessa forma, poderíamos ter dois blocos de código sendo executados: o de algum valor que corresponda aquele contido na variável, e o da marcação default.

- Não é obrigatório o uso da marcação default na estrutura switch. Exemplo:

```
switch( identificador ){
    case 1:
        printf("Papel\n");
        break;
    case 2:
        printf("Tesoura\n");
        break;
    case 3:
        printf("Cola\n");
        break;
    case 4:
        printf("Caneta\n");
        break;
}
```

Com o código acima, se o usuário digitar um valor inválido de identificador, o programa apenas será encerrado sem imprimir nada (isto também ocorre com o código apresentado no primeiro método de resolução).

Com a estrutura switch, podemos adicionar um alerta de invalidez utilizando a marcação default:

```
switch( identificador ){
    case 1:
        printf("Papel\n");
        break;
    case 2:
        printf("Tesoura\n");
        break;
    case 3:
        printf("Cola\n");
        break;
    case 4:
        printf("Caneta\n");
        break;
    default: // caso o identificador digitado seja invalido
        printf("Identificador invalido\n");
}
```

