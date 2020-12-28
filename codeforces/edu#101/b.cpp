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
    int n,m,t;
    cin>>t;

    while(t--){
        cin>>n;
        vector<ll> a(n), sum1(n+1);
        forn(i,0,n)
        	cin>>a[i], sum1[i+1]=sum1[i]+a[i];
        cin>>m;
        vector<ll> b(m), sum2(m+1);
        forn(i,0,m)
        	cin>>b[i], sum2[i+1]=sum2[i]+b[i];
        ll ans=0;
        forn(i,0,n+1)
        	forn(j,0,m+1)
        		ans=max(ans,sum1[i]+sum2[j]);
        cout<<ans<<'\n';
    }
    return 0;
}