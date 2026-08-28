#include <bits/stdc++.h>
using namespace std;

long long fatorial(int n) {
    if (n <= 1) return 1; // caso base
    return n * fatorial(n - 1);
}

int main() {
    cout << fatorial(5) << '\n';
}