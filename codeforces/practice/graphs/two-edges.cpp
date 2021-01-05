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
    int n,m,x,y,t;
    cin>>t;

    while(t--){
        cin>>n>>m;
        vector<ll> deg(n);

        forn(i,0,m)
        	cin>>x>>y,
        	deg[x-1]++, deg[y-1]++;

        ll ans=0;
        forn(i,0,n)
        	ans+=deg[i]*(deg[i]-1)/2;
        cout<<ans<<'\n';
    }
    return 0;
}