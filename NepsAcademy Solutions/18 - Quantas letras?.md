# Quantas Letras? 

# Solução em C
```
#include <stdio.h>
#include <stdlib.h>

int main(){    	
  	char s[50], c;
	int count = 0;
	
	scanf("%s %c", s, &c);
	
	for(int i = 0; i < strlen(s); i++)
		if(s[i] == c)
			count++;
	
	printf("%d", count);
	
    return 0;
}
```
# Solução em C++
```
#include <iostream>
using namespace std;

int main(){
    string s; 
	char c;
	int count = 0;
	
	cin >> s >> c;
	
	for(int i = 0; i < s.size(); i++)
		if(s[i] == c)
			count++;
		
	cout << count << endl;
	
    return 0;
}
```