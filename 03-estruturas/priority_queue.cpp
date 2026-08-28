#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> maior;
    maior.push(5);
    maior.push(10);
    cout << maior.top() << '\n'; // 10

    priority_queue<int, vector<int>, greater<int>> menor;
    menor.push(5);
    menor.push(10);
    cout << menor.top() << '\n'; // 5
}