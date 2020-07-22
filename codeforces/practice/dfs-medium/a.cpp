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

map<int,vector<int>> adj;
set<int> vis;
int start;

void dfs(int u){
	if(vis.count(u))
		return ;
	cout<<u+1<<' ';
	vis.insert(u);
	for(auto v: adj[u])
		if(!vis.count(v))
			dfs(v);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b;
    {
        cin>>n;
        forn(i,0,n){
        	cin>>a>>b;
        	adj[a-1].push_back(b-1);
        	adj[b-1].push_back(a-1);
        }
        forit(it,adj)
        	if(it->second.size()==1)
        		start = it->first, dfs(it->first);
    }
    return 0;
}