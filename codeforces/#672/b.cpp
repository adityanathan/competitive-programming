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
    int n,t,a;
    ll ans;
    cin>>t;

    while(t--){
        cin>>n;
        map<int,ll> m;
        ans=0;
        forn(i,0,n)
        	cin>>a, m[log2(a)]++;
        
        for(auto x:m)
        	ans+=x.second*(x.second-1)/2;
        cout<<ans<<'\n';
    }
    return 0;
}