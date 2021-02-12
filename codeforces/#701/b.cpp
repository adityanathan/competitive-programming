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
    int n,k,q,l,r;
    {
        cin>>n>>q>>k;
        vector<ll> a(n),tot(n+1),b(n);
        forn(i,0,n)
        	cin>>a[i];
        forn(i,1,n-1)
        	b[i]=a[i+1]-a[i-1]-2;
        forn(i,0,n)
        	tot[i+1]=tot[i]+b[i];
        forn(i,0,q){
        	cin>>l>>r;

        	ll ans=r-l>=2?tot[r-1]-tot[l]:0;
        	ans+=r-l>=1?a[l]-2+k-1-a[r-2]:0;
        	if(r==l)
        		ans=k-1;

        	cout<<ans<<'\n';
        }
    }
    return 0;
}