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

vector<int> vis,c,isit,pp;
vector<vector<int>> adj;

void dfs(int u){
	vis[u]=true;
	isit[u]=!c[u];
	for(auto v: adj[u])
		if(!vis[v])
			dfs(v),isit[u]+=!c[v];
}

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	int n,root,x,cc=0;
	
	cin>>n;
	vis.assign(n,false);
	c.assign(n,false);
	isit.assign(n,false);
	pp=c;
	adj.assign(n,vector<int>());

	forn(i,0,n){
		cin>>x>>c[i];
		if(x==-1){
			root=i;
			continue;
		}
		adj[i].push_back(x-1);
		adj[x-1].push_back(i);
	}

	dfs(root);
	isit[root]=1;

	forn(i,0,n)
		if(!isit[i])
			cout<<i+1<<' ';
		else
			cc++;
	if(cc==n)
		cout<<"-1";
}