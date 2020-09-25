#include<bits/stdc++.h>
using namespace std;

// shortest path printing complete path

map<int,map<int,int>> adj;

void dijkstra(int n){
	vector<pair<long long,int>> dist(n,{1e18,0});
	int u;
	priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> pq;
	dist[0]={0,-1}, pq.push({dist[0].first,0});
	while(!pq.empty()){
		u=pq.top().second, pq.pop();
		for(auto v:adj[u])
			if(dist[v.first].first>dist[u].first+v.second)
				dist[v.first]={dist[u].first+v.second,u}, pq.push({dist[v.first].first,v.first});
	}
	if(dist[n-1].first==1e18){
		cout<<-1;
		exit(0);
	}
	vector<int> ans;
	int i=n-1;
	while(i!=-1)
		ans.push_back(i), i=dist[i].second;
	reverse(ans.begin(), ans.end());
	for(auto x:ans)
		cout<<x+1<<' ';
}
int main(){
	int n, m, a, b, w;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b>>w, a--, b--;
		if(adj[a].find(a)==adj[a].end())
			adj[a][b]=adj[b][a]=w;
		else
			adj[a][b]=adj[b][a]=min(adj[a][b],w);
	}
	dijkstra(n);
}