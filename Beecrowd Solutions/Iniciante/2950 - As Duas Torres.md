# 2950 - As Duas Torres

Saruman e Sauron precisam de uma comunicação estável, pois têm medo que Frodo e seus amigos consigam atrapalhar seus planos, portanto, querem saber quanto de ICM há na comunicação de seus Palantír’s, para que saibam quanto de magia devem empregar na comunicação.

[As Duas Torres - Beecrowd](https://judge.beecrowd.com/pt/problems/view/2950)

# Solução

```
#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    
    // Calculate the ICM
    double ICM = static_cast<double>(N) / (X + Y);
    
    // Set the precision to 2 decimal places for the output
    cout << fixed << setprecision(2) << ICM << endl;
    
    return 0;
}
```