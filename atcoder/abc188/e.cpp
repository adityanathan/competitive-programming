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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,x,y;

    cin>>n>>m;
    vector<vector<int>> adj(n);
    ll ans=-1e10;
    vector<ll> a(n), gold(n);
    forn(i,0,n)
    	cin>>a[i], gold[i]=1e10;
    forn(i,0,m)
    	cin>>x>>y, adj[x-1].push_back(y-1);
    forn(i,0,n){
    	ans=max(ans,a[i]-gold[i]);
    	for(auto v:adj[i])
    		gold[v]=min(gold[v],min(gold[i],a[i]));
    }

    cout<<ans<<'\n';
    
    return 0;
}