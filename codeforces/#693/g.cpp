#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.rbegin(); it!=m.rend(); ++it)
typedef long long ll;

vector<int> dist, ans;
vector<vector<int>> adj;

void bfs(int s){
    queue<int> q;
    q.push(s);
    dist[s]=0;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v: adj[u])
            if(dist[v]==1e9)
                q.push(v), dist[v]=dist[u]+1;
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
        dist.assign(n,1e9);
        ans.assign(n,1e9);
        forn(i,0,m){
        	cin>>x>>y;
            adj[x-1].push_back(y-1);
        }
        bfs(0);
        map<int,vector<int>> lvl;
        forn(i,0,n)
            lvl[dist[i]].push_back(i);
        forit(it,lvl)
            for(auto u:it->second)
                for(auto v:adj[u])
                    if(dist[u]<dist[v])
                        ans[u]=min(ans[u],ans[v]);
        forn(i,0,n)
            cout<<min(dist[i],ans[i])<<' ';
        cout<<'\n';
    }
    return 0;
}