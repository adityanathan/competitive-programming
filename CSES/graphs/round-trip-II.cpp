#include <bits/stdc++.h> // directed graphs, cycle finding
using namespace std;

vector<vector<int>> adj;
int pivot;
vector<int> vis,cycle;

bool dfs(int u){
    for(auto v:adj[u])
        if(!vis[v]){
            vis[v]=1;
            if(dfs(v)){
                cycle.push_back(u+1);
                return u!=pivot;
            }
        }
        else if(vis[v]==1&&!cycle.size()){
            pivot=v;
            cycle.push_back(u+1);
            return true;
        }
    vis[u]=2;
    return false;
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
            vis[n]=1, dfs(n);

    if(cycle.size()){
        cout<<cycle.size()+1<<'\n'<<cycle[0]<<' ';
        reverse(cycle.begin(),cycle.end());
        for(auto x:cycle)
            cout<<x<<' ';
    }
    else
        cout<<"IMPOSSIBLE";

    return 0;
}