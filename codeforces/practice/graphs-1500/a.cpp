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

vector<vector<pair<int,int>>> adj;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,k,x,y,l,aa,ans=1000000007;

    cin>>n>>m>>k;

	adj.assign(n,vector<pair<int,int>>());
	set<int> a;

	forn(i,0,m){
		cin>>x>>y>>l;
		adj[x-1].push_back({y-1,l});
		adj[y-1].push_back({x-1,l});
	}

	forn(i,0,k)
		cin>>aa,a.insert(aa-1);

	forn(i,0,n)
		if(a.count(i)==0)
			for(auto x:adj[i])
				if(a.count(x.first))
					ans=min(ans,x.second);

	cout<<(ans==1000000007?-1:ans);

    return 0;
}