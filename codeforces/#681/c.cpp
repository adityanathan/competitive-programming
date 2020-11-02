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
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        vector<pair<ll,ll>> a(n);
        vector<ll> sum(n+1);
        forn(i,0,n)
        	cin>>a[i].first;
        forn(i,0,n)
        	cin>>a[i].second;
        sort(a.begin(),a.end());
        
        forn(i,1,n+1)
        	sum[i]=a[i-1].second+sum[i-1];
        ll ans=sum[n];
        // debug(a,sum,ans);
        forn(i,0,n)
        	ans=min(ans,max(a[i].first,sum[n]-sum[i+1]));
        cout<<ans<<'\n';
    }
    return 0;
}