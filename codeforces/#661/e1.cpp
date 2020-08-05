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
priority_queue<int,vector<int>,greater<int>> pq;
int dfs(int u, int w){
    vis[u]=true;
    int ans=1;
    for(auto v: adj[u])
        if(!vis[v.first])
            ans+=dfs(v.first);
    pq.push(ans*adj[])
    return ans;
}

void bfs(int u){
    queue<int> q;
    q.push(u);
    vis[u] = true;

    while(!q.empty()){
        int f = q.front();
        q.pop();
        for(auto v: adj[f])
            if(!vis[v.first])
                q.push(v.first), vis[v.first]=true;
    }
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
