# Inheritance Introduction

https://www.hackerrank.com/challenges/inheritance-introduction/problem?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=24-hour-campaign

# Solution
```

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Triangle{
    public:
    	void triangle(){
     		cout<<"I am a triangle\n";
    	}
};

class Isosceles : public Triangle{
    public:
    	void isosceles(){
    		cout<<"I am an isosceles triangle\n";
    	}
  		//Write your code here.
        void description(){
            cout << "In an isosceles triangle two sides are equal\n";
        }
};

int main(){
    Isosceles isc;
    isc.isosceles();
  	isc.description();
    isc.triangle();
    return 0;
}

```