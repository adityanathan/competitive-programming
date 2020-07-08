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
	queue<int> q;
	q.push(u);
	q.push(-1);
	int ans=1;
	vis[u] = true;

	while(!q.empty()){
		if(q.front()==-1){
			if(q.size()==1)
				break;
			else
				q.pop(),ans+=q.size()%2,q.push(-1);
		}
		int f = q.front();
		q.pop();
		for(auto v: adj[f])
			if(!vis[v])
				q.push(v), vis[v]=true;
	}
	return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x;
    cin>>n;

	vis.assign(n,false);
	adj.assign(n,vector<int>());

	forn(i,0,n-1){
		cin>>x;
		adj[x-1].push_back(i+1);
		adj[i+1].push_back(x-1);
	}

	cout<<bfs(0);

    return 0;
}