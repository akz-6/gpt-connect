#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,3,5,7,9};
    int x = 5;

    bool existe = binary_search(v.begin(), v.end(), x);

    auto it = lower_bound(v.begin(), v.end(), x);
    // it aponta para o primeiro valor >= x

    cout << existe << '\n';
}