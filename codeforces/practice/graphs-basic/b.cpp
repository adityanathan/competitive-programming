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
vector<int> a;
vector<vector<int>> adj;

void bfs(int u){
	queue<int> q;
	q.push(u);
	vis[u] = true;
	vector<int> v,z;

	while(!q.empty()){
		int f = q.front();
		v.push_back(f),z.push_back(a[f]);
		q.pop();
		for(auto v: adj[f])
			if(!vis[v])
				q.push(v), vis[v]=true;
	}
	sort(v.begin(),v.end());
	sort(z.begin(),z.end());

	forn(i,0,v.size())
		a[v[i]]=z[i];
}

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t,n,m,x;
	cin>>t;
	
	while(t--){
		cin>>n>>m;
		vis.assign(n,false);
		a.assign(n,0);
		vector<int> b(n);
		adj.assign(n,vector<int>());

		forn(i,0,n)
			cin>>a[i],b[i]=a[i];

		forn(i,0,m){
			cin>>x;
			adj[x-1].push_back(x);
			adj[x].push_back(x-1);
		}

		forn(i,0,n)
			if(!vis[i])
				bfs(i);
		sort(b.begin(),b.end());

		cout<<(a!=b?"NO\n":"YES\n");
	}

	
}