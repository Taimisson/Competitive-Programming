# Área da Circunferência


# Solução em C
```
#include <stdio.h>
#include <stdlib.h>

int main(){    	
    float r;
	scanf("%f", &r);
	
	float area = 3.1416 * (r * r);
	
	printf("%.2f", area);

    return 0;
}
```
# Solução em C++
```
#include <iostream>
using namespace std;

int main() {
 	double r;
	cin >> r;
	
	double area = 3.1416 * (r * r);
	
	cout.precision(2);
	cout.setf(ios::fixed);
	
	cout << area << endl;

    return 0;
}
```