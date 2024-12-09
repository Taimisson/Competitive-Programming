#include <bits/stdc++.h>

using namespace std;

int mul(int a, int b){
    return a * b;
}

int main(){
    string texto;
    long long sumMul = 0;

    regex pattern(R"(mul\((\d{1,3}),(\d{1,3})\))");
    regex do_pattern(R"(do\(\))");
    regex dont_pattern(R"(don't\(\))");

    bool podeMultiplicar = true;

    while (getline(cin, texto)) {
        regex combined(R"(don't\(\)|do\(\)|mul\((\d{1,3}),(\d{1,3})\))");

        auto begin = sregex_iterator(texto.begin(), texto.end(), combined);
        auto end_it = sregex_iterator();

        for(auto it = begin; it != end_it; ++it){
            smatch match = *it;
            string found = match.str();

            if(found == "do()") podeMultiplicar = true;
            else if(found == "don't()") podeMultiplicar = false;
            else
                if(podeMultiplicar){
                    int a = stoi(match[1]);
                    int b = stoi(match[2]);
                    sumMul += mul(a, b);
                }
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
