#include <bits/stdc++.h>
using namespace std;

vector<int> vis,ans;
vector<vector<int>> adj;

void dfs(int u){
	for(auto v:adj[u])
		if(vis[v]==-1)
			vis[v]=!vis[u], dfs(v);
}

int main(){
	int n, m, a, b;
	cin>>n>>m;
	vis.assign(n,-1);
	adj.assign(n, vector<int>());
	while(m--){
		cin>>a>>b, a--, b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for(int i=0;i<n;i++)
		if(vis[i]==-1)
			vis[i]=0, dfs(i);
	for(int i=0;i<n;i++)
		for(auto v:adj[i])
			if(vis[i]==vis[v]){
				cout<<-1;
				return 0;
			}
	for(int i=0;i<n;i++)
		if(vis[i])
			ans.push_back(i);
	cout<<ans.size()<<'\n';
	for(auto x:ans)
		cout<<x+1<<' ';
	cout<<'\n'<<n-ans.size()<<'\n';
	for(int i=0;i<n;i++)
		if(!vis[i])
			cout<<i+1<<' ';
}