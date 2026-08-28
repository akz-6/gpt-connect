#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.pop_back();

    cout << v.size() << '\n';

    for (int x : v) cout << x << ' ';
}