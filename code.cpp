#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {

        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
    
    int n, lin, col, soma = 0, sum = 0, valor, termo = 0, result;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    
    for (int j = 0; j < n; j++) {
        soma += grid[0][j];
        sum += grid[1][j];
    }
    
    if (soma != sum) {
        if (soma > sum) {
            valor = soma;
        } else {
            valor = sum;
        }
    } else {
        valor = soma;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 0) {
                lin = i;
                col = j;
                for (int k = 0; k < n; k++) {
                    termo += grid[lin][k];
                }
            }
        }
    }   
    result = valor - termo;
    cout << result << endl << lin+1 << endl << col+1 << endl;
    
}