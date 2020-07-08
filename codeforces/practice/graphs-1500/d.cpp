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

double dfs(int u){
	vis[u]=true;
	double ans=0,tot=0;
	for(auto v: adj[u])
		if(!vis[v])
			ans+=dfs(v),tot++;
	if(!tot)
		return 0;
	return 1+ans/tot;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x,y;
    cin>>n;

	vis.assign(n,false);
	adj.assign(n,vector<int>());

	forn(i,0,n-1){
		cin>>x>>y;
		adj[x-1].push_back(y-1);
		adj[y-1].push_back(x-1);
	}

	cout<<setprecision(7)<<dfs(0);
}