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

ll p = 998244353;

ll power(ll x, ll n){
    if(n==0)
        return 1;
    ll ans=power(x,n/2);
    if(n%2)
        return ((ans*ans)%p*x)%p;
    return (ans*ans)%p;
}

vector<int> a(1000007,0);

ll an(int n){
    if(a[n]==0)
        a[n]=(an(n-1)+power(n,n&-n))%p;
    return a[n];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin>>t;
    a[0]=a[1]=1;
    while(t--){
        cin>>n;
        cout<<an(n)<<'\n';
    }
    return 0;
}