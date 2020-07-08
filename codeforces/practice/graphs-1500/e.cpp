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

int dfs(int u){
	vis[u]=true;
	int ans=1;
	for(auto v: adj[u])
		if(!vis[v])
			ans+=dfs(v);
	return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,k,x,y,cnt,ans=0,tot=0,mx=0;
    cin>>n>>m>>k;

	vis.assign(n,false);
	adj.assign(n,vector<int>());

	vector<int> a(k);

	forn(i,0,k)
		cin>>a[i];

	forn(i,0,m){
		cin>>x>>y;
		adj[x-1].push_back(y-1);
		adj[y-1].push_back(x-1);
	}

	forn(i,0,k)
		if(!vis[a[i]-1])
			cnt=dfs(a[i]-1),mx=max(cnt,mx),ans+=cnt*(cnt-1)/2,tot+=cnt;

	debug(tot);
	cout<<ans+mx*(n-tot)+(n-tot)*(n-tot-1)/2-m;
}