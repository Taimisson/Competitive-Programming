## For Loop

https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true

# Solution
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
