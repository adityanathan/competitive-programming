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
vector<int> p;
int sec;
set<int> cycle;
vector<vector<int>> adj;

bool cyc(int u){
	vis[u]=true;
	for(auto v: adj[u])
		if(!vis[v]){
			p[v]=u;
			if(cyc(v)){
				cycle.insert(u);
				return sec!=u;
			}
		}
		else if(v!=p[u]){
			cycle.insert(u);
			sec=v;
			return sec!=u;
		}
	return false;
}

int dfs(int u){
	vis[u]=true;
	int ans=1;
	for(auto v: adj[u])
		if(!vis[v] && !cycle.count(v))
			ans+=dfs(v);
	return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t,n,x,y;
	cin>>t;

	while(t--){
		cin>>n;
		vis.assign(n,false);
		p.assign(n,-1);
		cycle.clear();
		adj.assign(n,vector<int>());

		forn(i,0,n){
			cin>>x>>y;
			adj[x-1].push_back(y-1);
			adj[y-1].push_back(x-1);
		}
		cyc(0);
		debug(cycle);
		vis.assign(n,false);
		vector<ll> v;
		for(auto x:cycle)
			v.push_back(dfs(x));
		debug(v);
		ll ans=0;
		for(auto x:v)
			ans+=x*(x-1)/2+x*(n-x);
		cout<<ans<<'\n';
	}
}
