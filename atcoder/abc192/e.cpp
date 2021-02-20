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


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,x,xi,y,yi,t,k;

    cin>>n>>m>>x>>y; x--, y--;
    vector<vector<pair<int,pair<int,int>>>> adj(n);
    forn(i,0,m)
    	cin>>xi>>yi>>t>>k,
    	adj[xi-1].push_back({yi-1,{t,k}}),
    	adj[yi-1].push_back({xi-1,{t,k}});
    vector<ll> dist(n,1e18);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({x,dist[x]=0});
    while(pq.size()){
    	auto [u,_]=pq.top(); pq.pop();
    	if(_>dist[u])
    		continue;
    	for(auto [v,wk]:adj[u])
    		if(dist[v]>dist[u]+wk.first+(wk.second-(dist[u])%wk.second)%wk.second)
    			pq.push({v,dist[v]=dist[u]+wk.first+(wk.second-(dist[u])%wk.second)%wk.second});
    }
    cout<<(dist[y]==1e18?-1:dist[y])<<'\n';
    
    return 0;
}