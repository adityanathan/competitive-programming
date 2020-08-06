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
vector<int> desc;
vector<vector<int>> adj;

void dfs(int u){
	vis[u]=true;
	desc[u]=(adj[u].size()==1)&&u;
	for(auto v: adj[u])
		if(!vis[v])
			dfs(v), desc[u]+=desc[v];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n,x;
	cin>>n;

	vis.assign(n,false);
	desc.assign(n,false);
	adj.assign(n,vector<int>());

	forn(i,1,n){
		cin>>x;
		adj[x-1].push_back(i);
		adj[i].push_back(x-1);
	}
	dfs(0);
	sort(desc.begin(),desc.end());
	forn(i,0,n)
		cout<<max(1,desc[i])<<' ';
}