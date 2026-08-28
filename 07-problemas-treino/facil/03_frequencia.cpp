#include <bits/stdc++.h>
using namespace std;

// Treino: frequência de cada valor.
int main(){
    int n; cin>>n;
    map<int,int> freq;
    while(n--){int x;cin>>x;freq[x]++;}
    for(auto [x,q]:freq) cout<<x<<" "<<q<<"\n";
}