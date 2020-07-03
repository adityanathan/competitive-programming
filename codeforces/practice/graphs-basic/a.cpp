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

void dfs(int u){
	vis[u]=true;
	for(auto v: adj[u])
		if(!vis[v])
			dfs(v);
}

void bfs(int u){
	queue<int> q;
	q.push(u);
	vis[u] = true;

	while(!q.empty()){
		int f = q.front();
		q.pop();
		for(auto v: adj[f])
			if(!vis[v])
				q.push(v), vis[v]=true;
	}
}

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	int n,kix,kiy,kfx,kfy,qx,qy;
	
	cin>>n>>qx>>qy>>kix>>kiy>>kfx>>kfy;

	kix-=qx,kiy-=qy,kfx-=qx,kfy-=qy;

	if(!(kix&&kiy&&kfx&&kfy)){
		cout<<"NO";
		return 0;
	}
	if(kix>0==kfx>0 && kiy>0 == kfy>0)
		cout<<"YES";
	else
		cout<<"NO";
}