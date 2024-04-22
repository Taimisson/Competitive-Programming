## Conditional Statements

https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem?isFullScreen=true

# Solution
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