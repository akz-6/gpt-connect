#include <bits/stdc++.h>
using namespace std;

long long soma(long long a, long long b) {
    return a + b;
}

void dobrar(int& x) {
    x *= 2;
}

int main() {
    int x = 5;
    dobrar(x);
    cout << soma(x, 10) << '\n';
}