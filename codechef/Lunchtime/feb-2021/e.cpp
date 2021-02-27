#include <bits/stdc++.h>
using namespace std;
#include"../debug.h"

vector<vector<int>> adj;
vector<int> vis;
int col;

void dfs(int u){
	vis[u]=col;
	for(auto v:adj[u])
		if(!vis[v])
			dfs(v);
}
int main(){
    int n,x,y,m,t,ans;
    cin>>t;

    while(t--){
        cin>>n>>m;
        adj.assign(n,vector<int>());
        vis.assign(n,0);
        while(m--){
        	cin>>x>>y;
        	adj[x-1].push_back(y-1);
        	adj[y-1].push_back(x-1);
        }
        map<int,vector<int>> m;
        col=1,ans=0;
        for(int i=0;i<n;i++){
        	m[adj[i].size()].push_back(i);
        	if(!vis[i])
        		dfs(i), col++;
        }
        for(auto x:m){
        	if(x.second.size()+x.first>=n){
        		debug(x.second);
        	}
        }
        cout<<ans<<'\n';
    }
    return 0;
}