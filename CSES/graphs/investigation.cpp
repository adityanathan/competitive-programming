#include<bits/stdc++.h> // dijsktra, number of shortest paths, smallest/longest shortest path
using namespace std;
typedef long long ll;

int main(){
	int n,m,x,y,w;
	cin>>n>>m;
	vector<vector<pair<int,ll>>> adj(n);
	vector<ll> dist(n,1e18), dist2(n,1e18), ways(n);
	vector<int> mins(n),maxs(n);
	while(m--)
		cin>>x>>y>>w,
		adj[x-1].push_back({y-1,w});

	priority_queue<pair<pair<ll,int>,int>,vector<pair<pair<ll,int>,int>>,greater<pair<pair<ll,int>,int>>> pq;
	pq.push({{dist[0]=0,0},0});
	while(pq.size()){
		auto [d,u]=pq.top(); pq.pop();
		if(d>make_pair(dist[u],mins[u]))
			continue;
		for(auto [v,w]:adj[u])
			if(make_pair(dist[v],mins[v]) > make_pair(dist[u]+w,mins[u]+1))
				pq.push({{dist[v]=dist[u]+w,mins[v]=mins[u]+1},v});
	}
	dist.assign(n,1e18);
	pq.push({{dist[0]=0,0},0});
	while(pq.size()){
		auto [d,u]=pq.top(); pq.pop();
		if(d>make_pair(dist[u],maxs[u]))
			continue;
		for(auto [v,w]:adj[u])
			if(make_pair(dist[v],maxs[v]) > make_pair(dist[u]+w,maxs[u]-1))
				pq.push({{dist[v]=dist[u]+w,maxs[v]=maxs[u]-1},v});
	}

	priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq2;
	pq2.push({dist2[0]=0,0}); ways[0]=1;

	while(pq2.size()){
		auto [w,u]=pq2.top(); pq2.pop();
		if(w>dist2[u])
			continue;
		for(auto [v,w]:adj[u])
			if(dist2[v] >= dist2[u]+w){
				if(dist2[u]+w==dist[v])
					ways[v]+=ways[u], ways[v]%=(int)1e9+7;
				pq2.push({dist2[v]=dist2[u]+w,v});
			}
		dist2[u]=-1;
	}

	cout<<dist[n-1]<<' '<<ways[n-1]<<' '<<mins[n-1]<<' '<<-maxs[n-1];
}