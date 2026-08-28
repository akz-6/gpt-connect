#include <bits/stdc++.h>
using namespace std;

// Treino: dado n e n números, imprima a soma.
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    long long soma=0,x;
    while(n--){ cin >> x; soma+=x; }
    cout << soma << '\n';
}