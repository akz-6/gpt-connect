#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {4,1,3,2};

    sort(v.begin(), v.end());
    sort(v.begin(), v.end(), greater<int>());

    reverse(v.begin(), v.end());
}