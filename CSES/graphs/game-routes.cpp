#include<bits/stdc++.h> // topological sort, number of paths/ways
using namespace std;

vector<vector<int>> adj;
vector<long long> vis, topo, sum;

void dfs(int u){
    vis[u]=1;
    for(auto v:adj[u])
        if(!vis[v])
            dfs(v);
    topo.push_back(u);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,x,y,u;
    cin>>n>>m;

    adj.assign(n,vector<int>());
    vis.assign(n,0);
    sum.assign(n,-1);

    while(m--)
        cin>>x>>y,
        adj[x-1].push_back(y-1);

    u=n-1;
    while(n--)
        if(!vis[n])
            dfs(n);

    reverse(topo.begin(),topo.end());
    sum[0]=1;

    for(auto u:topo)
        for(auto v:adj[u])
        	if(sum[u]!=-1)
        		sum[v]+=sum[u]+(sum[v]==-1), sum[v]%=(int)1e9+7;

    cout<<(sum[u]+1?sum[u]:0);

    return 0;
}