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

vector<vector<int>> adj;
vector<int> vis;

int dfs(int u){
	vis[u]=1;
	for(auto v:adj[u])
		if(!vis[v])
			vis[u]+=dfs(v);
	return vis[u];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,x,y,t,test;
    cin>>test;
	t=test;

    while(t--){
        cin>>n>>m;
        adj.assign(n,vector<int>());
        vis.assign(n,0);

        while(m--)
        	cin>>x>>y,
        	adj[x-1].push_back(y-1),
        	adj[y-1].push_back(x-1);

        ll ans=0;

        while(n--){
        	if(!vis[n])
        		ans+=dfs(n)+1;
        }
        cout<<"Case #"<<test-t<<": "<< ans-2 <<'\n';
    }
    return 0;
}