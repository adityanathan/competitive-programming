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

vector<int> vis,final;
vector<vector<int>> adj;
int k;

bool dfs(int u){
	bool ans=false;
	for(auto v: adj[u])
		if(ans)
			break;
		else if(vis[v]==-1)
			vis[v]=vis[u]+1, ans=dfs(v);
		else if(vis[u]-vis[v]>=k){
			ans=true; break;
		}
	if(ans){
		final.push_back(u);
		return true;
	}
	return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n,m,x,y;
	bool ans=false;

	cin>>n>>m>>k;
	vis.assign(n,-1);
	adj.assign(n,vector<int>());

	forn(i,0,m){
		cin>>x>>y;
		adj[x-1].push_back(y-1);
		adj[y-1].push_back(x-1);
	}

	forn(i,0,n)
		if(ans){
			cout<<final.size()<<'\n';
			for(auto x:final)
				cout<<x+1<<' ';
			return 0;
		}
		else if(vis[i]==-1)
			vis[i]=0, ans=dfs(i);
}