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

vector<int> vis,s={-1},siz;
int rnk=1;
vector<set<int>> adj;

void dfs(int u){
	vis[u]=rnk++;
	siz[u]=1;
	s.push_back(u);
	for(auto v: adj[u])
		if(!vis[v])
			dfs(v),siz[u]+=siz[v];
}

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	int n,q,x,y;
	
	cin>>n>>q;
	vis.assign(n,false);
	siz = vis;
	adj.assign(n,set<int>());

	forn(i,1,n){
		cin>>x;
		adj[x-1].insert(i);
		adj[i].insert(x-1);
	}

	dfs(0);
	forn(i,0,q){
		cin>>x>>y;
		if(y>siz[x-1])
			cout<<"-1\n";
		else
			cout<<s[vis[x-1]+y-1]+1<<'\n';
	}
	
}