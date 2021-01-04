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
vector<int> dist, ans;
vector<vector<int>> adj;

void dfs(int u){
    vis[u]=true;
    for(auto v:adj[u]){
        if(!vis[v])
            dfs(v);
        if(dist[u]<dist[v])
            ans[u]=min(ans[u],ans[v]);
    }
}

void bfs(int s){
    queue<int> q;
    q.push(s);
    dist[s]=0;
    vis[s] = true;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v: adj[u])
            if(!vis[v])
                q.push(v), dist[v]=dist[u]+1, vis[v]=true;
            else if(dist[v]<dist[u])
                    ans[u]=min(ans[u],dist[v]);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,x,y,t;
    cin>>t;

    while(t--){
        cin>>n>>m;
        adj.assign(n,vector<int>());
        vis.assign(n,0);
        dist.assign(n,1e9);
        ans.assign(n,1e9);
        forn(i,0,m){
        	cin>>x>>y;
            adj[x-1].push_back(y-1);
        }
        bfs(0);
        vis.assign(n,0);
        debug(dist,ans);
        dfs(0);
        forn(i,0,n)
            cout<<min(dist[i],ans[i])<<' '; cout<<'\n';
    }
    return 0;
}