#include <bits/stdc++.h>
using namespace std;

// Exemplo: vetor ordenado e soma alvo
int main() {
    vector<int> v = {1,2,4,7,11};
    int alvo = 9;
    int l = 0, r = (int)v.size() - 1;

    while (l < r) {
        int soma = v[l] + v[r];
        if (soma == alvo) {
            cout << l << ' ' << r << '\n';
            break;
        }
        if (soma < alvo) l++;
        else r--;
    }
}