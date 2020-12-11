#include <bits/stdc++.h> // two colouring, bipartite checking
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

vector<vector<int>> adj;
vector<int> vis;

void dfs(int u){
    for(auto v:adj[u])
        if(vis[v]==-1)
            vis[v]=!vis[u],dfs(v);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,x,y;
    cin>>n>>m;

    adj.assign(n,vector<int>());
    vis.assign(n,-1);

    while(m--)
        cin>>x>>y,
        adj[x-1].push_back(y-1),
        adj[y-1].push_back(x-1);

    forn(i,0,n)
        if(vis[i]==-1)
            vis[i]=0, dfs(i);

    bool b=true;

    forn(i,0,n)
        for(auto x:adj[i])
            if(vis[x]==vis[i])
                b=false;

    if(b)
        forn(i,0,n)
            cout<<vis[i]+1<<' ';
    else
        cout<<"IMPOSSIBLE";

    return 0;
}