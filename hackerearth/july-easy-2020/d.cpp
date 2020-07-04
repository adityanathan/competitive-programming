#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(ll i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

vector<ll> fact(100000,1), inv(100000,1);
ll p = 1e9+7;

ll modInverse(ll a, ll m){ 
    ll m0 = m; 
    ll y = 0, x = 1; 
  
    if (m == 1) 
      return 0; 
  
    while (a > 1) 
    { 
        ll q = a/m; 
        ll t = m; 
        m = a % m, a = t; 
        t = y;
        y = x - q * y; 
        x = t; 
    } 
  
    if (x < 0) 
       x += m0; 
  
    return x; 
} 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,t,ans;
    cin>>t;

    
    forn(i,1,100001)
    	fact[i]=fact[i-1]*i%p, inv[i]=modInverse(fact[i],p);

    while(t--){
        cin>>n;
        ans=0;
        
        forn(i,0,n/2+1)
        	ans+=fact[n]*inv[i]%p*inv[i]%p*inv[n-2*i]%p,
        	ans%=p;
        
        cout<<ans<<'\n';
    }
    return 0;
}