#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

vector<vector<ll>> dist;
vector<vector<pair<ll,ll>>> adj;

void dijkstra(int s){
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
    dist[s]={0,0,0};
    for(auto [v,w]:adj[0])
		dist[v]={w,w,w},
		pq.push({w,v});

    while(pq.size()){
        auto [d,u]=pq.top(); pq.pop();
		if(d>dist[u][0])
			continue;
		for(auto [v,w]:adj[u])
			if(dist[v][0] > dist[u][0]+w+dist[u][1]-dist[u][2]-max(dist[u][1],w)+min(dist[u][2],w)){
				dist[v]={dist[u][0]+w+dist[u][1]-dist[u][2]-max(dist[u][1],w)+min(dist[u][2],w),max(dist[u][1],w),min(dist[u][2],w)};
				pq.push({dist[v][0],v});
			}
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n,m,x,y,w;

	cin>>n>>m;
	dist.assign(n,{(ll)1e18,-(ll)1e9,(ll)1e9+7});
	adj.assign(n,vector<pair<ll,ll>>());

	forn(i,0,m){
		cin>>x>>y>>w;
		adj[x-1].push_back({y-1,w});
		adj[y-1].push_back({x-1,w});
	}
	dijkstra(0);
	forn(i,0,n-1)
		cout<<dist[i+1][0]<<' ';

}
