# 3171 - Cordão de Led

# Solução
```
#include <iostream>
using namespace std;

const int MAXN = 101;
int parent[MAXN], treeRank[MAXN]; // Renomeamos 'rank' para 'treeRank'

// Função para inicializar os conjuntos
void initialize(int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        treeRank[i] = 0;
    }
}

// Função para encontrar o representante de um conjunto
int find(int x) {
    if (parent[x] != x) {
        parent[x] = find(parent[x]); // Compressão de caminho
    }
    return parent[x];
}

// Função para unir dois conjuntos
void unite(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);
    
    if (rootX != rootY) {
        if (treeRank[rootX] > treeRank[rootY]) {
            parent[rootY] = rootX;
        } else if (treeRank[rootX] < treeRank[rootY]) {
            parent[rootX] = rootY;
        } else {
            parent[rootY] = rootX;
            treeRank[rootX]++;
        }
    }
}

// Função para verificar se todos estão conectados
bool allConnected(int n) {
    int root = find(1);
    for (int i = 2; i <= n; i++) {
        if (find(i) != root) {
            return false;
        }
    }
    return true;
}

int main() {
    int N, L;
    cin >> N >> L;

    // Inicializa os conjuntos
    initialize(N);
    
    // Lê as conexões e une os conjuntos
    for (int i = 0; i < L; i++) {
        int X, Y;
        cin >> X >> Y;
        unite(X, Y);
    }

    // Verifica se todos os segmentos estão conectados
    if (allConnected(N)) {
        cout << "COMPLETO" << endl;
    } else {
        cout << "INCOMPLETO" << endl;
    }

    return 0;
}
```