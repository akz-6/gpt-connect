#include <bits/stdc++.h>
using namespace std;

int n = 3;
vector<int> escolha;

void gerar(int i) {
    if (i == n) {
        for (int x : escolha) cout << x << ' ';
        cout << '\n';
        return;
    }

    // não escolhe i
    gerar(i + 1);

    // escolhe i
    escolha.push_back(i);
    gerar(i + 1);
    escolha.pop_back(); // desfaz
}

int main() {
    gerar(0);
}