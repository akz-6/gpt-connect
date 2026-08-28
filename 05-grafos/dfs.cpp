#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;

void dfs(int u) {
    vis[u] = true;
    for (int v : adj[u])
        if (!vis[v])
            dfs(v);
}

int main() {
    int n, m; cin >> n >> m;
    adj.assign(n, {});
    vis.assign(n, false);

    while (m--) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(0);
}