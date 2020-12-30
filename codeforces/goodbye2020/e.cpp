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
    ll x, p=1e9+7.5;
    cin>>t;

    while(t--){
        cin>>n;
        vector<ll> a(n),count(60);
        ll ans=0;
        forn(i,0,n){
            cin>>a[i], x=a[i];
            int j=0;
            while(x)
                count[j]+=x%2, x/=2, j++;
        }

        forn(i,0,n){
            ll prod1=0, prod2=0, j=0, pow2=1;
            while(j<60)
                prod1+=pow2*(a[i]%2)*count[j]%p, prod2+=pow2*(a[i]%2?n:count[j])%p, a[i]/=2, prod1%=p, prod2%=p, pow2*=2, pow2%=p, j++;
            ans+=prod1*prod2%p;
            ans%=p;
        }
        cout<<ans<<'\n';
    }
    return 0;
}