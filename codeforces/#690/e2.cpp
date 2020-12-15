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

ll pp=1e9+7.5;

ll modPow(ll a, ll x, ll p) {
    ll res = 1;
    while(x > 0) {
        if( x % 2 != 0) {
            res = (res * a) % p;
        }
        a = (a * a) % p;
        x /= 2;
    }
    return res;
}

ll ncr(ll n, ll k){
    ll num = 1, denom = 1;
    for (int i=0; i<k; i++)
        num = num*(n-i) % pp;

    for (int i=1; i<=k; i++) 
        denom = (denom * i) % pp;
    
    return num* modPow(denom, pp-2, pp) % pp;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,k,t;
    cin>>t;

    while(t--){
        cin>>n>>m>>k;
        vector<int> a(n);
        forn(i,0,n)
            cin>>a[i];
        sort(a.begin(),a.end());
        debug(a);
        ll i=0, j=0, ans=0;
        while(i<n && j<n){
            while(j<n && (a[j]-a[i]<=k || j-i<m-1))
                j++;
            j--;
            if(j-i>=m-1)
                ans+=ncr(j-i,m-1), ans%=pp;
            debug(i,j,ans);
            i++;
        }
        
        cout<<ans<<'\n';
    }
    return 0;
}