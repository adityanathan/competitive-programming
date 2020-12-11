#include <bits/stdc++.h> // undirected graphs, bfs
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

void bfs(int u){
    queue<int> q;
    q.push(u);
    vis[u]=-2;

    while(q.size()){
        u=q.front(), q.pop();
        for(auto v:adj[u])
            if(vis[v]==-1)
                vis[v]=u, q.push(v);
    }
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

    bfs(n-1);

    if(vis[0]!=-1){
        vector<int> path;
        int top=0;
        while(top!=-2)
            path.push_back(top+1),
            top=vis[top];
        cout<<path.size()<<'\n';
        for(auto x:path)
            cout<<x<<' ';
    }
    else
        cout<<"IMPOSSIBLE";

    return 0;
}