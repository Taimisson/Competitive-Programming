#include <bits/stdc++.h>

using namespace std;

int main() {

    string linha;
    int quantidade_seguros = 0;

    while(true){
        if(!getline(cin, linha)) break;

        stringstream ss(linha);
        vector<int> niveis;
        int valor;

        while(ss >> valor) niveis.push_back(valor);

        if(niveis.size() < 2)
        {
            quantidade_seguros++;
            continue;
        }

        bool possivelCrescente, possivelDecrescente = true;

        int i = 1;
        while(i < niveis.size() && niveis[i] == niveis[i-1]) ++i;

        if(i == niveis.size()) continue;

        bool crescente = (niveis[i] > niveis[i-1]);

        bool seguro = true;
        for(int j = 1; j < niveis.size(); ++j){
            int dif = niveis[j] - niveis[j-1];
            int abs_dif = (dif < 0) ? -dif : dif;

            if(abs_dif < 1 || abs_dif > 3) {
                seguro = false;
                break;
            }

            if(crescente && niveis[j] <= niveis[j-1]){
                seguro = false;
                break;
            }
            if(!crescente && niveis[j] >= niveis[j-1]){
                seguro = false;
                break;
            }
        }

        if(seguro) quantidade_seguros++;

    }

    cout << quantidade_seguros << endl;
    return 0;

}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
