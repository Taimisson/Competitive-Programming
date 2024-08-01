# Vogais e Consoantes

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


```
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    string vogais = "", consoantes = "";
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u')) {
            vogais += s[i];
        } else {
            consoantes += s[i];
        }
    }
    cout << "Vogais: " << vogais << "\n";
    cout << "Consoantes: " << consoantes << "\n";
}
```