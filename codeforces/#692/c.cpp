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

set<pair<int,int>> vis;
vector<set<pair<int,int>>> a;
map<pair<int,int>,pair<int,int>> par;
bool dfs(pair<int,int> u){
	vis.insert(u);
	for(auto v: a[u.first])
		if(v==u||v==par[u])
			continue;
		else if(!vis.count(v)){
			par[v]=u;
			if(dfs(v))
				return true;
		}
		else
			return true;
	for(auto v: a[u.second])
		if(v==u||v==par[u])
			continue;
		else if(!vis.count(v)){
			par[v]=u;
			if(dfs(v))
				return true;
		}
		else
			return true;
	return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x,y,m,t;
    cin>>t;

    while(t--){
        cin>>n>>m;
        int ans=0;
        set<pair<int,int>> all;
        a.assign(n,set<pair<int,int>>());
        vis.clear();
        par.clear();
        forn(i,0,m){
        	cin>>x>>y;
        	if(x!=y)
        		a[x-1].insert({x-1,y-1}), a[y-1].insert({x-1,y-1}), all.insert({x-1,y-1}), ans++;
        }

        for(auto x:all)
        	if(!vis.count(x)){
        		debug(x,ans,vis);
        		ans+=dfs(x);
        		debug(x,ans,vis);
        	}

        		
        cout<<ans<<'\n';
    }
    return 0;
}