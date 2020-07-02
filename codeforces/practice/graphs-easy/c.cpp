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
vector<vector<int>> adj;
vector<int> a;

int dfs(int u){
	vis[u]=true;
	int ans = a[u];
	for(auto v: adj[u])
		if(!vis[v])
			ans=min(ans,dfs(v));
	return ans;
}

int main(){
	ll n,m,x,y,ans=0;
	{
		cin>>n>>m;
		
		adj.assign(n,vector<int>());
		a.assign(n,0);
		forn(i,0,n)
			cin>>a[i];
		forn(i,0,m){
			cin>>x>>y;
			adj[x-1].push_back(y-1);
			adj[y-1].push_back(x-1);
		}
		vis.assign(n,false);
		forn(i,0,n)
			if(!vis[i])
				ans+=dfs(i);
	}
	cout<<ans;
}