#include<bits/stdc++.h> // dijkstra, one edge modified
using namespace std;
typedef long long ll;

vector<vector<pair<int,int>>> adj[2];
vector<ll> dist[2];

void dijkstra(int s, bool b){
	priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
	pq.push({dist[b][s]=0,s});
	while(pq.size()){
		auto [w,u]=pq.top(); pq.pop();
		if(w>dist[b][u])
			continue;
		for(auto [v,w]:adj[b][u])
			if(dist[b][v]>dist[b][u]+w)
				pq.push({dist[b][v]=dist[b][u]+w,v});
	}
}

int main(){
	int n,m,x,y,w;
	cin>>n>>m;
	adj[0].assign(n,vector<pair<int,int>> ());
	adj[1].assign(n,vector<pair<int,int>> ());
	dist[0].assign(n,1e18);
	dist[1].assign(n,1e18);
	while(m--)
		cin>>x>>y>>w,
		adj[0][x-1].push_back({y-1,w}),
		adj[1][y-1].push_back({x-1,w});

	dijkstra(0,0);
	dijkstra(n-1,1);

	ll ans=1e18;

	for(int u=0;u<n;u++)
		for(auto [v,w]:adj[0][u])
			ans=min(ans,dist[0][u]+dist[1][v]+w/2);

	cout<<ans;
}