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
    ll t,n,l,r,k,ans;

    cin>>t;
    while(t--){
        cin>>n;
        vector<ll> a(n+1,0);
        forn(i,0,n){
            cin>>k>>l>>r;
            a[0]+=l,a[k]-=l,a[k]+=r,a[n]-=r;
            debug(a);
        }
        ans=a[0];
        forn(i,1,n+1)
        	a[i]+=a[i-1],ans=max(ans,a[i]);
        cout<<ans<<'\n';
    }
    
    return 0;
}