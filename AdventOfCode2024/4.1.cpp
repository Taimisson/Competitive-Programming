#include <bits/stdc++.h>

using namespace std;

int main(){
   vector<string> grid; // grid é um vetor de strings
    {
        string line;
        while (getline(cin, line)) {
            if(!line.empty()) grid.push_back(line);
            else break;
        }
    }

    const string target = "XMAS";
    int rows = grid.size();
    int cols = rows > 0 ? grid[0].size() : 0;

    vector<pair<int,int>> directions = {
            {0, 1},   // direita
            {0, -1},  // esquerda
            {1, 0},   // baixo
            {-1, 0},  // cima
            {1, 1},   // diagonal baixo-direita
            {1, -1},  // diagonal baixo-esquerda
            {-1, 1},  // diagonal cima-direita
            {-1, -1}  // diagonal cima-esquerda
    };

    auto canFind = [&](int r, int c, int dr, int dc) {
        // Verifica se é possível encontrar "XMAS" a partir de (r,c) na direção (dr,dc)
        for (int i = 0; i < (int)target.size(); i++) {
            int nr = r + i * dr;
            int nc = c + i * dc;
            // Checa se está dentro dos limites e se a letra corresponde
            if (nr < 0 || nr >= rows || nc < 0 || nc >= cols) {
                return false;
            }
            if (grid[nr][nc] != target[i]) {
                return false;
            }
        }
        return true;
    };

    long long countOccurrences = 0;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            // Se a primeira letra não for 'X', sem necessidade de tentar
            if (grid[r][c] != 'X') continue;
            // Tenta achar "XMAS" a partir desta posição em cada direção
            for (auto &d : directions) {
                if (canFind(r, c, d.first, d.second)) {
                    countOccurrences++;
                }
            }
        }
    }

    cout << countOccurrences << endl;

}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
