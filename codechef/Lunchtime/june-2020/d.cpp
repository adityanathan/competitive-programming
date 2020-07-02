#pragma GCC optimize ("Ofast")
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
vector<int> clus;
vector<unordered_set<int>> adj;

void dfs(int u){
	vis[u]=true;
	for(auto v: adj[u])
		if(!vis[v])
			clus[v]=u,dfs(v);
}

int main(){
	int n,m,a,b,ans=0;
	{
		cin>>n>>m;
		vis.assign(n,false);
		adj.assign(n,unordered_set<int>());

		forn(i,0,m){
			cin>>a>>b;
			if(ans!=1){
    			forn(k,0,b-a)
    				adj[a-1+k].insert(b-1-k),
    				adj[b-1-k].insert(a-1+k);
    			ans=0;
    			vis.assign(n,false);
    			clus.assign(n,-1);
    			forn(i,0,n)
    				if(!vis[i])
    					ans++,clus[i]=i,dfs(i);
			}
			cout<<i<<" "<<ans<<endl;
		}
	}
}