#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<long long> v(n), pref(n + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        pref[i + 1] = pref[i] + v[i];
    }

    // Soma do intervalo [l, r]:
    // pref[r + 1] - pref[l]
}