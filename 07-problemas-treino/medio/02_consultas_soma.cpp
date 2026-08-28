#include <bits/stdc++.h>
using namespace std;

// Prefix sum: consultas de soma [l,r], índices 0-based.
int main(){
    int n,q;cin>>n>>q;
    vector<long long> p(n+1);
    for(int i=0;i<n;i++){long long x;cin>>x;p[i+1]=p[i]+x;}
    while(q--){int l,r;cin>>l>>r;cout<<p[r+1]-p[l]<<'\n';}
}