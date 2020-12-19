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
    int n;
    ll ans=0;
    cin>>n;
    vector<ll> a(n),sum(n+1);
    forn(i,0,n)
    	cin>>a[i];
    sort(a.begin(),a.end());
    forn(i,1,n+1)
    	sum[i]=sum[i-1]+a[i-1];
    forn(i,0,n)
    	ans+=sum[n]-sum[i+1]+(n-i-1)*(-a[i])+i*a[i]-sum[i];

    cout<<ans/2<<'\n';
    
    return 0;
}