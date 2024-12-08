#include <bits/stdc++.h>

using namespace std;

bool ehSeguro(const vector<int>& niveis){
    if(niveis.size() < 2) return true;

    int i = 1;
    while(i < niveis.size() && niveis[i] == niveis[i-1]) i++;

    if(i == niveis.size()) return false;

    bool crescente = niveis[i] > niveis[i-1];

    for(int j = 1; j < niveis.size(); j++){
        int dif = niveis[j] - niveis[j-1];
        int abs_dif = (dif < 0) ? -dif : dif; // isso vai ser util para o caso de dif == 0 e crescente == false (ou seja, decrescente)

        if(abs_dif < 1 || abs_dif > 3) return false;

        if(crescente && niveis[j] <= niveis[j-1]) return false;
        if(!crescente && niveis[j] >= niveis[j-1]) return false;
    }

    return true;
}

int main() {
    string linha;
    int quantidade_seguros = 0;

    while(true){
        if(!getline(cin,linha)) break;
        if(linha.empty()) continue;

        stringstream ss(linha);
        vector<int> niveis;
        int valor;
        while(ss >> valor) niveis.push_back(valor);

        if(ehSeguro(niveis)) quantidade_seguros++;
        else{
            bool ficouSeguro = false;
            for(int index = 0; index < niveis.size(); index++){
                vector<int> copia = niveis;
                copia.erase(copia.begin() + index);
                if(ehSeguro(copia)){
                    ficouSeguro = true;
                    break;
                }
            }
            if(ficouSeguro) quantidade_seguros++;
        }
    }

    cout << quantidade_seguros << endl;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
