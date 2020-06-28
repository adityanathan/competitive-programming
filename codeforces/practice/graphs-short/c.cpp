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

vector<int> vis;
vector<int> par;
vector<vector<int>> adj;
unordered_set<pair<int,int>> count;
int s,t;

int bfs(int u){
	queue<int> q;
	q.push(u);

	while(!q.empty()){
		int f = q.front();
		q.pop();
		for(auto v: adj[f]){
			if(!vis[v] && v!=s)
				q.push(v), par[v]=f, vis[v]=vis[v]?min(vis[v],vis[f]+1):vis[f]+1;
			if(v==t){
				if(vis[v]==vis[f]+1){
					vector<int> x;
					while(par[v]!=-1)
						x.push_back(v),v=par[v];
				}
			}
		}
	}
	return count;
}

int main(){
	int n,m,a,b;
	cin>>n>>m>>s>>t;
	s--,t--;
	vis.assign(n,0);
	par.assign(n,-1);
	adj.assign(n,vector<int>());

	forn(i,0,m){
		cin>>a>>b;
		adj[a-1].push_back(b-1);
		adj[b-1].push_back(a-1);
	}
	int ways = bfs(s);
	debug(vis,ways);
	cout<<n*(n-1)/2-ways*vis[t]*(vis[t]+1)/2;
}