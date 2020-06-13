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
    ll ans;

    while(cin>>n){
        vector<ll> weight(1<<n),potency(1<<n);
        forn(i,0,1<<n)
            cin>>weight[i];
        
        forn(i,0,1<<n)
            forn(j,0,n)
                potency[i]+=weight[i^(1<<j)];

        ans=0;

        forn(i,0,1<<n)
            forn(j,0,n)
                ans=max(ans,(ll)potency[i]+potency[i^(1<<j)]);
        cout<<ans<<"\n";
    }
    return 0;
}