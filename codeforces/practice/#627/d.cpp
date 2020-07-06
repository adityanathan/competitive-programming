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
    ll n,aa,ans;
    {
        cin>>n;
        ans=0;
        vector<int> a(n);
        forn(i,0,n)
        	cin>>a[i];
        forn(i,0,n)
        	cin>>aa,a[i]-=aa;
        sort(a.begin(),a.end());
        debug(a);
        forn(i,0,n)
        	ans+=a.end()-upper_bound(a.begin(),a.end(),-a[i]),debug(ans);
        ans-=a.end()-upper_bound(a.begin(),a.end(),0);
        cout<<ans/2<<'\n';
    }
    return 0;
}