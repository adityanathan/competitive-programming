#include<bits/stdc++.h> // dijkstra, k shortest paths
using namespace std;
typedef long long ll;

int main(){
	int n,m,x,y,w,k;
	cin>>n>>m>>k;
	vector<vector<pair<int,int>>> adj(n);
	vector<vector<ll>> dist(n);
	while(m--)
		cin>>x>>y>>w,
		adj[x-1].push_back({y-1,w});

	priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
	pq.push({0,0});

	while(pq.size()){
		auto [d,u]=pq.top(); pq.pop();
		if(dist[u].size()>=k)
			continue;
		dist[u].push_back(d);
		for(auto [v,w]:adj[u])
			pq.push({d+w,v});
	}

	for(auto x:dist[n-1])
		cout<<x<<' ';
}