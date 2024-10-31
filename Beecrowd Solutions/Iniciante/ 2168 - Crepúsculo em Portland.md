# 2168 - Crepúsculo em Portland

# Solução
```
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int cameras[N+1][N+1];
    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= N; ++j) {
            cin >> cameras[i][j];
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            // Verifica se há pelo menos duas câmeras nas esquinas da quadra
            int count = cameras[i][j] + cameras[i][j+1] + cameras[i+1][j] + cameras[i+1][j+1];
            if (count >= 2) {
                cout << 'S';
            } else {
                cout << 'U';
            }
        }
        cout << endl;
    }

    return 0;
}
```