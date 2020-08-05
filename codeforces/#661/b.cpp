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
        ll x=1e9+5,y=1e9+5, ans=0;
        vector<ll> a(n),b(n);
        forn(i,0,n){
        	cin>>a[i];
        	x=min(x,a[i]);
        }
        forn(i,0,n){
        	cin>>b[i];
        	y=min(y,b[i]);
        }
        forn(i,0,n){
        	ans+=max(a[i]-x,b[i]-y);
        	debug(ans);
        }
        cout<<ans<<'\n';
    }
    return 0;
}