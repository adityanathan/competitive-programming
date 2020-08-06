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
int cnt=0;
int dfs(int u){
	vis[u]=true;
	int ans=1;
	for(auto v: adj[u])
		if(!vis[v])
			ans+=dfs(v);
	if(ans%2==0 && u){
		cnt++;
		return 0;
	}
	return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n,x,y;
	{
		cin>>n;
		vis.assign(n,false);
		adj.assign(n,vector<int>());

		forn(i,0,n-1){
			cin>>x>>y;
			adj[x-1].push_back(y-1);
			adj[y-1].push_back(x-1);
		}
		dfs(0);
		cout<<(n%2?-1:cnt);
	}
}