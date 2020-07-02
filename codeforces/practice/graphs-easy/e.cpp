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

vector<bool> vis,gis;
vector<vector<int>> adj;

void dfs(int u){
	vis[u]=true;
	for(auto v: adj[u])
		if(!vis[v])
			dfs(v);
}

int main(){
	ll n,m;
	string h,v;

	cin>>n>>m>>h>>v;
	
	adj.assign(n*m,vector<int>());
	vis.assign(n*m,false);
	gis.assign(n*m,true);

	debug(n,m,h,v);
	forn(i,0,n){
		if(h[i]=='>')
			forn(j,0,m-1)
				adj[i*m+j].push_back(i*m+j+1);
		else
			forn(j,0,m-1)
				adj[i*m+j+1].push_back(i*m+j);
	}

	forn(j,0,m){
		if(v[j]=='v')
			forn(i,0,n-1)
				adj[i*m+j].push_back((i+1)*m+j);
		else
			forn(i,0,n-1)
				adj[(i+1)*m+j].push_back(i*m+j);
	}

	forn(i,0,n*m){
		vis.assign(n*m,false);
		dfs(i);
		if(vis!=gis){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
}