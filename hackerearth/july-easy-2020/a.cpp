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

ll p = 1e7;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,t,aa,ans;
    cin>>t;

    while(t--){
        cin>>n;
        set<int> as;
        ans=0;
        forn(i,0,n){
        	cin>>aa;
        	as.insert(aa);
        }
        for(auto x:as)
        	ans+=x;
        cout<<ans<<'\n';
    }
    return 0;
}