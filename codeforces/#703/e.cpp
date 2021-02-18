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

map<pair<int,bool>,map<pair<int,bool>> adj;

void dijkstra(int n){
	map<pair<int,bool>,pair<long long,int>> dist;
	forn(i,0,n)
		dist[{i,0}]={1e18,0}, dist[{i,1}]={1e18,0};
	pair<int,bool> u;
	priority_queue<pair<long long,pair<int,bool>>,vector<pair<long long,pair<int,bool>>>,greater<pair<long long,pair<int,bool>>>> pq;
	dist[{0,0}]={0,0}, pq.push({dist[0].first,0});
	while(!pq.empty()){
		u=pq.top().second, pq.pop();
		if(u.second){
			for(auto v:adj[u])
				if(dist[v.first].first>dist[u].first+(dist[u].second+v.second)*(dist[u].second+v.second))
					dist[v.first]={dist[u].first+(dist[u].second+v.second)*(dist[u].second+v.second),0}, pq.push({dist[v.first].first,v.first});
		}
		else 
			for(auto v:adj[u])
				if(dist[v.first].first>dist[u].first+)
					dist[v.first]={dist[u].first+(dist[u].second+v.second)*(dist[u].second+v.second),0}, pq.push({dist[v.first].first,v.first});

	}
	if(dist[n-1].first==1e18){
		cout<<-1;
		exit(0);
	}
	
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,x,y,w;

    while(m--){
    	cin>>x>>y, x--, y--;
    	adj[{x,0}][{y,1}]=w;
    	adj[{x,1}][{y,0}]=w;
    	adj[{y,0}][{x,1}]=w;
    	adj[{y,1}][{x,0}]=w;
    }


    
    return 0;
}