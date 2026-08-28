#include <bits/stdc++.h>
using namespace std;

// BFS: distância mínima em número de arestas.
int main(){
    int n,m,s,t; cin>>n>>m>>s>>t;
    vector<vector<int>> adj(n);
    while(m--){int a,b;cin>>a>>b;adj[a].push_back(b);adj[b].push_back(a);}
    vector<int> dist(n,-1); queue<int> q;
    dist[s]=0;q.push(s);
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int v:adj[u]) if(dist[v]==-1)
            dist[v]=dist[u]+1,q.push(v);
    }
    cout<<dist[t]<<'\n';
}