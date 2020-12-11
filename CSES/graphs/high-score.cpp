#include<bits/stdc++.h> // bellman ford
using namespace std;
typedef long long ll;
#define forn(i,n) for(int i=0;i<n;i++)

vector<vector<int>> adj;
vector<int> vis;

void dfs(int u){
	vis[u]=true;
	for(auto v:adj[u])
		if(!vis[v])
			dfs(v);
}

int main(){
	int n,m,x,y,w;
	cin>>n>>m;
	vector<ll> dist(n,-1e18);
	adj.assign(n,vector<int>());
	vis.assign(n,false);
	vector<tuple<int,int,ll>> e;

	while(m--)
		cin>>x>>y>>w,
		adj[x-1].push_back(y-1),
		e.push_back({x-1,y-1,w});

	dist[0]=0;
	forn(_,n-1)
		for(auto [u,v,w]:e)
			dist[v]=max(dist[v],dist[u]+w);

	for(auto [u,v,w]:e)
		if(dist[u]!=-1e18 && dist[u]+w>dist[v]){
			dfs(u);
			break;
		}
	cout<<(vis[n-1]?-1:dist[n-1])<<'\n';
}