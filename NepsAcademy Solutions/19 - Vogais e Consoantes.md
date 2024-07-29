# Vogais e Consoantes

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