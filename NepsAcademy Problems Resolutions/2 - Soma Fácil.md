# Soma Fácil

Faça um programa para ler dois valores inteiros A e B  imprima o resultado da expressão (A+B)

- Entrada

A entrada consiste de duas linhas. A primeira linha contém o inteiro A e a segunda linha contém o inteiro B.

- Saída

A saída consiste de uma linha contendo o resultado da expressão (A+B)

- Restrições

Os inteiros fornecidos não terão valor absoluto maior que 1000.

Exemplos de Entrada	Exemplos de Saída

        2                   5
        3

        -2                  1
        3

        10                  99
        89


# Solução em C
```
int main(){
    // Lendo a entrada do exercício
	int A, B;
	scanf("%d",&A);
	scanf("%d",&B);

    // Seu código vai aqui
	printf("%d", A+B); 

}
```
# Solução em C++
```
int main(){
    // Lendo a entrada do exercício
    int A, B;
    cin >> A >> B;

    // Seu código vai aqui
	cout << A+B << endl;
    return 0;
}
```