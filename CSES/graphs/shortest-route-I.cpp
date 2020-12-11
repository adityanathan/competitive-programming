#include<bits/stdc++.h> // dijsktra
using namespace std;
typedef long long ll;

int main(){
	int n,m,x,y,w;
	cin>>n>>m;
	vector<vector<pair<int,ll>>> adj(n);
	vector<ll> dist(n,1e18);
	while(m--)
		cin>>x>>y>>w,
		adj[x-1].push_back({y-1,w});

	priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
	pq.push({dist[0]=0,0});

	while(pq.size()){
		auto [w,u]=pq.top(); pq.pop();
		if(w>dist[u])
			continue;
		for(auto [v,w]:adj[u])
			if(dist[v] > dist[u]+w)
				pq.push({dist[v]=dist[u]+w,v});
	}

	for(auto x:dist)
		cout<<x<<' ';
}