# 2126 - Procurando Subsequências

# Solução
```
#include <bits/stdc++.h>

using namespace std;

int main(){
    string n1, n2;
    int case_num = 1;

    while(cin >> n1 >> n2) {
        int count = 0, last_pos = -1;

        size_t pos = n2.find(n1); // Método de busca de substring
        while(pos != string::npos) {
            count++;
            last_pos = pos + 1;
            pos = n2.find(n1, pos + 1);
        }

        cout << "Caso #" << case_num << ":" << endl;
        if(count > 0) {
            cout << "Qtd.Subsequencias: " << count << endl;
            cout << "Pos: " << last_pos << endl;
        } else {
            cout << "Nao existe subsequencia" << endl;
        }

        case_num++;

        // Verifica se ainda há mais casos a serem processados antes de imprimir a linha em branco
        if(cin.peek() != EOF)
            cout << endl;
    }

}

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
```