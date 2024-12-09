#include <bits/stdc++.h>

using namespace std;

int mul(int a, int b){
    return a * b;
}

int main(){
    string texto;
    long long sumMul = 0;

    regex pattern(R"(mul\((\d{1,3}),(\d{1,3})\))");
    while(getline(cin, texto)){
        smatch match;
        while(regex_search(texto, match, pattern)){
            sumMul += stoi(match[1]) * stoi(match[2]);
            texto = match.suffix().str();
        }
    }
    cout << sumMul << endl;

}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
