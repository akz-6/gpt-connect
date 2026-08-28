#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "abc";
    s += "!";
    s.push_back('x');

    cout << s.size() << '\n';
    cout << s.substr(0, 2) << '\n';

    if (s.find("ab") != string::npos)
        cout << "encontrou\n";
}