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
    int n,m,x=1e9,ans=0;

    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    forn(i,0,n)
    	forn(j,0,m)
    		cin>>a[i][j], x=min(x,a[i][j]);
    forn(i,0,n)
    	forn(j,0,m)
    		ans+=a[i][j]-x;
    cout<<ans<<'\n';
    
    return 0;
}