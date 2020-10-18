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
    ll n,w,t,test;
    cin>>test;
    t=test;

    while(t--){
        cin>>w>>n;
        vector<ll> x(w),check(4*w);
        forn(i,0,w)
            cin>>x[i], check[i]=x[i], check[w+i]=(n+x[i]-1+n/2)%n+1, check[2*w+i]=(n+x[i]+n/2)%n+1, check[3*w+i]=(n+x[i]-2+n/2)%n+1;
        ll ans=1e18;

        for(auto d:check){
        // forn(d,1,n+1){
            ll sum=0;
            forn(i,0,w)
                sum+=min(abs(abs(d-x[i])-n),abs(d-x[i]));
            ans=min(sum,ans);
        }

        cout<<"Case #"<<test-t<<": "<< ans <<'\n';
    }
    return 0;
}