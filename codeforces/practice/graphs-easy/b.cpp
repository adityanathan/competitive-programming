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
vector<unordered_set<int>> adj;
vector<int> group;

void dfs(int u){
	vis[u]=true;
	if(adj[u].size()==1)
		group.push_back(u);
	for(auto v: adj[u])
		if(!vis[v])
			dfs(v);
}

int main(){
	int n,m,a,b,ans=0;
	{
		cin>>n>>m;
		
		adj.assign(n,unordered_set<int>());

		forn(i,0,m){
			cin>>a>>b;
			adj[a-1].insert(b-1);
			adj[b-1].insert(a-1);
		}

		do{	debug(adj);
			group.clear();
			vis.assign(n,false);
			forn(i,0,n)
				if(!vis[i])
					dfs(i);
			for(auto a: group){
				debug(a);
				for(auto x: adj[a])
					adj[x].erase(a);
				adj[a].clear();
			}
			ans+=group.size()>0;
		} while(group.size());
	}
	cout<<ans;
}