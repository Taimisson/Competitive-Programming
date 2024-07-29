# Tamanho da String

# Solução em C
```
#include <stdio.h>
#include <stdlib.h>

int main(){    	
    char string[50];
	
	scanf("%s", string);
	printf("%d", strlen(string));
	
    return 0;
}
```
# Solução em C++
```
#include <iostream>
using namespace std;

int main(){
	
    string str;
	cin >> str;
	cout << str.size();

    return 0;
}
```