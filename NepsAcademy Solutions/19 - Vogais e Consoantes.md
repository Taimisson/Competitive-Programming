# Vogais e Consoantes

Faça um programa para ler uma string S (sem espaço). Seu programa deve imprimir duas listas. A primeira com todas as vogais da string e uma segunda com todas as consoantes da string.

- Entrada

A entrada consiste de uma linha contendo uma string S.

- Saída

A saída consiste de duas linhas. A primeira linha consiste da mensagem "Vogais: " seguida da string S sem as consoantes. A segunda linha consiste da mensagem "Consoantes: " seguida da string S sem suas vogais. Considere que apenas as letras 'a', 'e', 'i', 'o' e 'u' são vogais. Perceba nos exemplos de entrada e saída, que a ordem das letras na string S se mantém na saída.

- Restrições

1≤∣S∣≤50

A string contém apenas letras minúsculas do alfabeto

# Solução em C
```
#include <stdio.h>
#include <string.h>

int main() {
    char palavra[51], vogais[51], consoantes[51];
    int cont1=0, cont2=0;
    scanf("%s", palavra);
    
    for(int i=0; palavra[i]!='\0'; ++i)
        if(strchr("aeiou", palavra[i]) != NULL){
            vogais[cont1]=palavra[i];
            cont1++;
        } else {
            consoantes[cont2]=palavra[i];
            cont2++;
        }
    
    vogais[cont1]='\0';
    consoantes[cont2]='\0';

    printf("Vogais: %s\nConsoantes: %s", vogais, consoantes);
    
    return 0;
}
```
# Solução em C++
```
#include <iostream>
using namespace std;

int main() {
	string s, consoantes, vogais;
	cin >> s;
	
	for (int i=0; i<s.size(); i++) 
		if(string("aeiou").find(s[i]) != string::npos)
			vogais+=s[i];
		else
			consoantes+=s[i];
		
	cout << "Vogais: " << vogais << endl;
	cout << "Consoantes: " << consoantes << endl;
}
```
OBS:

1. **`string("aeiou").find(s[i])`**: Esta linha de código verifica se o caractere `s[i]` está presente na string `"aeiou"`.
2. **`!= string::npos`**: Esta parte verifica se o resultado de `find` não é igual a `string::npos`.

Portanto, a expressão `string("aeiou").find(s[i]) != string::npos` significa "se o caractere `s[i]` for encontrado na string `"aeiou"`". Se `find` retornar `string::npos`, isso indica que `s[i]` não é uma vogal (ou seja, não foi encontrado em `"aeiou"`). Se retornar qualquer outro valor, indica o índice onde o caractere foi encontrado, significando que `s[i]` é uma vogal.

A mesma lógica é aplicada para consoantes com a string `"bcdfghjklmnpqrstvwxyz"`.

É importante notar que `cin >> s;` irá ler a entrada apenas até o primeiro caractere de espaço em branco. Se você quiser ler uma linha inteira (incluindo espaços), deve usar `getline(cin, s)` em vez disso.