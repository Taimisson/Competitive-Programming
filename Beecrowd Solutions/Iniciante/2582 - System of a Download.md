# 2582 - System of a Download

System of a Download é uma famosa banda de Hacker Metal! Certa vez, eles criaram um dispositivo, com seis botões, numerados de 0 a 5, e colocaram nesse dispositivo os seus 11 maiores sucessos. Para tocar uma destas músicas, é preciso pressionar dois botões. Com isso, os números destes dois botões são somados, e então toca-se a música correspondente ao número da soma, conforme a relação abaixo:

[System of a Download - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2582)

# Solução
```
#include <iostream>
using namespace std;

int main() {
    int C;
    cin >> C;
    
    string songs[] = {
        "PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", 
        "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", 
        "ANSWER!", "RAR?", "WIFI ANTENNAS"
    };
    
    for (int i = 0; i < C; ++i) {
        int X, Y;
        cin >> X >> Y;
        int sum = X + Y;
        cout << songs[sum] << endl;
    }
    
    return 0;
}
```