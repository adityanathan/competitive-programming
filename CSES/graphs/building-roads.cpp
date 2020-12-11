#include <bits/stdc++.h> // unidrected graphs, dfs
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
vector<bool> vis;

void dfs(int u){
	vis[u]=true;
    for(auto v:adj[u])
        if(!vis[v])
            dfs(v);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,x,y;
    cin>>n>>m;

    adj.assign(n,vector<int>());
    vis.assign(n,false);

    while(m--)
        cin>>x>>y,
        adj[x-1].push_back(y-1),
        adj[y-1].push_back(x-1);

    vector<int> v;

    forn(i,0,n)
        if(!vis[i])
            v.push_back(i+1), dfs(i);

    cout<<v.size()-1<<'\n';
    forn(i,0,v.size()-1)
        cout<<v[i]<<' '<<v[i+1]<<'\n';

    return 0;
}