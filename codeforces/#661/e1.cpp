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


vector<bool> vis;
vector<vector<pair<int,int>>> adj;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
pair<int,ll> dfs(int u, int w){
    pair<int,ll> x;
    vis[u]=true;
    int ans=adj[u].size()==1, ans2=w*ans;
    for(auto v: adj[u])
        if(!vis[v.first])
            x=dfs(v.first, v.second), ans+=x.first, ans2+=x.second;
    pq.push({ans,ans*w});
    return {ans,ans*w+ans2};
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n,w,x,y;
    ll s;
    cin>>t;

    while(t--){
        cin>>n>>s;
        vis.assign(n,false);
        adj.assign(n,vector<pair<int,int>>());

        forn(i,0,n-1){
            cin>>x>>y>>w;
            adj[x-1].push_back({y-1,w});
            adj[y-1].push_back({x-1,w});
        }

        dfs(0,0);
    }
}
