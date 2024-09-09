#include <bits/stdc++.h>

using namespace std;


int fibonacci(int n){
    int a = 1, b = 2, c;

    if(n == 1) return 1;
    if(n == 2) return 2;

    for(int i = 2; i < n; ++i){
        c = a + b;
        a = b;
        b = c;
    }
    return b;  // return the nth fibonacci number
}

int main() {
    int N;
    cin >> N;
    cout << fibonacci(N) << endl;
    return 0;
}


auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
