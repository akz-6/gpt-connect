#include <bits/stdc++.h>
using namespace std;

// Treino: encontre o maior valor.
int main(){
    int n; cin>>n;
    int maior=INT_MIN,x;
    for(int i=0;i<n;i++){
        cin>>x;
        maior=max(maior,x);
    }
    cout<<maior<<'\n';
}