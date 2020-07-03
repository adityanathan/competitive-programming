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

vector<int> vis,vis1,vis2,level;
vector<set<int>> adj;

void lvl(int u){
	queue<int> q;
	q.push(u);
	vis[u] = true;

	while(!q.empty()){
		int f = q.front();
		q.pop();
		for(auto v: adj[f])
			if(!vis[v])
				q.push(v), vis[v]=true, level[v]=level[f]+1;
	}
}

int game(int u){
	queue<int> q1,q2;
	q1.push(0),q2.push(u);
	int reach1=0, reach2=level[u], move=0;
	vis1[0]=vis2[u]=true;

	while(reach2>reach1){
		q2.push(-1);
		while(true){
			int f = q2.front();
			q2.pop();
			if(f==-1)
				break;
			for(auto v: adj[f])
				if(!vis2[v])
					q2.push(v), vis2[v]=true, reach2=max(reach2,level[v]);
		}
		q1.push(-1);
		while(true){
			int f = q1.front();
			q1.pop();
			if(f==-1)
				break;
			for(auto v: adj[f])
				if(!vis1[v])
					q1.push(v), vis1[v]=true, reach1=max(reach1,level[v]);
		}
		move+=2;
	}
	return move;
}

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	int n,u,x,y;
	
	cin>>n>>u;
	vis.assign(n,false);
	level=vis1=vis2=vis;
	adj.assign(n,set<int>());

	forn(i,0,n-1){
		cin>>x>>y;
		adj[x-1].insert(y-1);
		adj[y-1].insert(x-1);
	}

	lvl(0);
	cout<<game(u-1);
	
}