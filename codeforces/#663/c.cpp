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

int p = 1e9+7.5;

ll pwr(ll a, ll n) {
    ll res = 1;
    while(n){
        if(n%2)
            res=res*a%p;
        a=a*a%p;
        n>>=1;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    {
        cin>>n;
        ll ans=1;
        forn(i,1,n+1)
        	ans*=i, ans%=p;
        cout<<(p+ans-pwr(2,n-1))%p<<'\n';
    }
    return 0;
}