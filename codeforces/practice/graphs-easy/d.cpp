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

int bfs(int u){
	queue<pair<int,int>> q;
	q.push({u,0});
	int x=0;
	vis[u] = true;

	while(!q.empty()){
		pair<int,int> f = q.front();
		q.pop();
		x+=f.second%2;
		for(auto v: adj[f.first])
			if(!vis[v])
				q.push({v,f.second+1}), vis[v]=true;
	}
	return x;
}

int main(){
	ll n,x,y,ans;
	{
		cin>>n;
		
		adj.assign(n,vector<int>());
		vis.assign(n,false);

		forn(i,0,n-1){
			cin>>x>>y;
			adj[x-1].push_back(y-1);
			adj[y-1].push_back(x-1);
		}
		ans=bfs(0);
	}
	cout<<max(0ll,ans*(n-ans)-n+1);
}