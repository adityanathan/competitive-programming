#include <bits/stdc++.h> // topological sort, cycle detection/checking
using namespace std;

vector<vector<int>> adj;
bool cycle=false;
vector<int> vis, topo;

void dfs(int u){
    vis[u]=1;
    for(auto v:adj[u])
        if(!vis[v])
            dfs(v);
        else if(vis[v]==1)
            cycle=true;
    vis[u]=2;
    topo.push_back(u+1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,x,y;
    cin>>n>>m;

    adj.assign(n,vector<int>());
    vis.assign(n,0);

    while(m--)
        cin>>x>>y,
        adj[x-1].push_back(y-1);

    while(n--)
        if(!vis[n])
            dfs(n);

    if(cycle)
        cout<<"IMPOSSIBLE";
    else{
        reverse(topo.begin(),topo.end());
        for(auto x:topo)
            cout<<x<<' ';
    }

    return 0;
}