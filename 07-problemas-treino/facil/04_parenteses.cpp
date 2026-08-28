#include <bits/stdc++.h>
using namespace std;

// Treino: verificar parênteses balanceados.
int main(){
    string s; cin>>s;
    stack<char> st;
    for(char c:s){
        if(c=='(') st.push(c);
        else if(c==')'){
            if(st.empty()){ cout<<"NAO\n"; return 0; }
            st.pop();
        }
    }
    cout<<(st.empty()?"SIM\n":"NAO\n");
}