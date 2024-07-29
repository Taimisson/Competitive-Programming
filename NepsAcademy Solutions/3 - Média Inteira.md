# Média Inteira

Faça um programa para ler dois valores inteiros A e B e imprima a média inteira dos valores A e B

- Entrada

A entrada consiste de duas linhas. A primeira linha contém o inteiro A e a segunda linha contém o inteiro B.

- Saída

A saída consiste de uma linha contendo a média inteira dos valores A e B.

- Restrições

Os inteiros fornecidos não terem valor absoluto maior que 1000.

Exemplos de Entrada	| Exemplos de Saídazc

        2                   2
        2

        5                   5
        6

        1                   7
        14

# Solução em C
```
int main(){
    // Lendo a entrada do exercício
	int A, B;
	scanf("%d",&A);
	scanf("%d",&B);

    // Seu código vai aqui
	printf("%d", (A+B)/2); 
}
```
# Solução em C++
```
int main(){
    // Lendo a entrada do exercício
    int A, B;
    cin >> A >> B;

    // Seu código vai aqui
	cout << (A+B)/2 << endl;
    return 0;
}
```