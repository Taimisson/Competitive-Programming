# C++ Introduction 
 
 * Hackerrank Solved C++ Introduction Questions

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

## Functions
```
int max_of_four(int a, int b, int c, int d) {
    
    int e {max(a, b)};
    int f {max (c, d)};
    return max(e, f);
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
```

## Pointer
```
void modify(int *a, int *b){
    int tempA = *a;
    *a = tempA + *b;
    *b = abs(tempA - *b);
}


int main() {
    
    int a;
    int b;
    cin >> a >> b;
    
    modify(&a, &b);
    
    cout << a << endl;
    cout << b << endl;
    
    return 0;
}
```

## Arrays Introduction
```
int main() {
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    for(int i = n - 1; i >= 0; i--)
        cout << arr[i] << " ";
    
    return 0;
}

```

## Variable Sized Arrays
```
int main() {
    int n;
    int q;
    cin >> n >> q;
    
    vector<vector<int>> arr(n);
    
    for(int i = 0; i < n; i++){
        int k; 
        cin >> k;
        arr[i].resize(k);
        for(int j = 0; j < k; j++)
            cin >> arr[i][j];
    }
    
    for(int i = 0; i < q; i++){
        int x, y;
        cin >> x >> y;
        cout << arr[x][y] << endl;
    }
    
    return 0;
}
```