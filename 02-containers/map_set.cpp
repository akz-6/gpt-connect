#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,1,3,2,1};

    map<int,int> freq;
    set<int> distintos;

    for (int x : v) {
        freq[x]++;
        distintos.insert(x);
    }

    for (auto [valor, quantidade] : freq)
        cout << valor << ": " << quantidade << '\n';
}