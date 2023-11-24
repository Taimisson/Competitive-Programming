# C++ Introduction 
 

## Say "Hello, World!" With C++
```
    int main() {

    string hello = "Hello, World!"; 
    cout << hello << endl;
    return 0;

    }
```

## Input and Output

```
int main() {
    
    int a, b, c;
    int sum;
    
    cin >> a >> b >> c;
    
    sum = a + b + c;
     
    cout << sum << endl;
    
    return 0;
}
```

## Basic Data Types

```
int main() {
    
    int i;
    long l;
    char c; 
    float f;
    double d;
    
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);
    
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%f\n", f);
    printf("%lf\n", d);
    
    return 0;
}
```

## Conditional Statements

```
int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    if (n<=9) {
        string numbers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        printf("%s",numbers[n-1].c_str());
    }
    else
        printf("Greater than 9");

    return 0;
}
```

## For Loop
```
int main() {
    int a,b;
    string numbers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> a;
    cin >> b;
    
    for(int i = a; i<=b; i++){
        if(i<=9){
            printf("%s\n",numbers[i-1].c_str());
        }else{
            (i%2 == 0)? cout << "even\n" : cout << "odd\n";
        }
        
    }
    
    return 0;
}
```

## 