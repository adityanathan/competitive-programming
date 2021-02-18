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
        vector<ll> x(n), y(n);
        forn(i,0,n)
        	cin>>x[i]>>y[i];
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        ll ans=1;
        if(n%2==0)
        	ans=(1+x[n/2]-x[n/2-1])*(1+y[n/2]-y[n/2-1]);
        
        cout<<ans<<'\n';
    }
    return 0;
}