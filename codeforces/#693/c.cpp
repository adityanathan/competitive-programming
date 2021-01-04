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
    ll n,t,ans,j;
    cin>>t;

    while(t--){
        cin>>n;
        vector<ll> a(n);
        ans=1;
        forn(i,0,n)
        	cin>>a[i];
        forn(i,0,n){
        	j=n-1-i;
        	if(j+a[j]<n)
        		a[j]+=a[j+a[j]];
        	ans=max(ans,a[j]);
        }
        cout<<ans<<'\n';
    }
    return 0;
}