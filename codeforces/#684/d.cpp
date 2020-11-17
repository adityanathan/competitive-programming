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

vector<bool> vis;
vector<set<int>> adj;

void dfs(int u){
	vis[u]=true;
	for(auto v: adj[u])
		if(!vis[v])
			dfs(v);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t,n,m,k,x,y;
	cin>>t;

	while(t--){
		cin>>n>>m>>k;
		vis.assign(n,false);
		adj.assign(n,vector<int>());

		forn(i,0,m){
			cin>>x>>y;
			adj[x-1].insert(y-1);
			adj[y-1].insert(x-1);
		}

		forn(i,0,n)
			if(adj[i].size()<k-1);
	}
}