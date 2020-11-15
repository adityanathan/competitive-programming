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
    int n,k;

    cin>>n>>k;
    vector<vector<ll>> t(n,vector<ll> (n));
    forn(i,0,n)
    	forn(j,0,n)
    		cin>>t[i][j];
    ll ans=0,tot;
    vector<int> p(n-1);
    forn(i,0,n-1)
    	p[i]=i+1;

    do{
    	tot=0;
    	forn(i,0,n-2)
    		tot+=t[p[i]][p[i+1]];
    	if(tot+t[0][p[0]]+t[p[n-2]][0]==k)
    		ans++;
    }
    while(next_permutation(p.begin(),p.end()));
    cout<<ans<<'\n';
    
    return 0;
}