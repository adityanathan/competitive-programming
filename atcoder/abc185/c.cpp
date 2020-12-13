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

ll gcd(ll a, ll b){
	return b?gcd(b,a%b):a;
}
ll ncr(ll n, ll r){	
	ll p = 1, k = 1;
 
    if(n - r < r)
        r = n - r;
 
    while (r) {
        p *= n;
        k *= r;
 		ll m = gcd(p, k);
 		p /= m;
        k /= m;

        n--;
        r--;
    }
    return p;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;

    cin>>n;
    cout<<ncr(n-1,11)<<'\n';
    
    return 0;
}