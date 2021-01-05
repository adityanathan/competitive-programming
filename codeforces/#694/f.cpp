#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

vector<int> vis;
vector<vector<int>> adj;

void dfs(int u){
    for(auto v:adj[u])
        if(vis[v]==1)
            vis[u]=0;
    if(vis[u]==-1)
        vis[u]=1;
    for(auto v:adj[u])
        if(vis[v]==-1)
            dfs(v);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,x,y,t;
    cin>>t;

    while(t--){
        cin>>n>>m;
        adj.assign(n,vector<int>());
        vis.assign(n,-1);
        forn(i,0,m)
            cin>>x>>y,
            adj[x-1].push_back(y-1),
            adj[y-1].push_back(x-1);

        dfs(0);
        bool b=true;

        forn(i,0,n)
            if(vis[i]==-1)
                b=false;

        if(!b){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        vector<int> ans;
        
        forn(i,0,n)
            if(vis[i]==1)
                ans.push_back(i+1);
        
        cout<<ans.size()<<'\n';
        for(auto x:ans)
            cout<<x<<' ';cout<<'\n';

    }
    return 0;
}