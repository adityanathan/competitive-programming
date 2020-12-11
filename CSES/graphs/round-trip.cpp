#include <bits/stdc++.h> // undirected graph cycle finding
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
int pivot;
vector<int> vis,cycle;


bool dfs(int u){
    for(auto v:adj[u])
        if(vis[v]==-1){
            vis[v]=u;
            if(dfs(v)){
                cycle.push_back(u+1);
                return u!=pivot;
            }
        }
        else if(v!=vis[u] && !cycle.size()){
            pivot=v;
            cycle.push_back(u+1);
            return true;
        }
    return false;
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
            vis[i]=-2, dfs(i);

    if(cycle.size()){
        cout<<cycle.size()+1<<'\n'<<pivot+1<<' ';
        for(auto x:cycle)
            cout<<x<<' ';
    }
    else
        cout<<"IMPOSSIBLE";

    return 0;
}