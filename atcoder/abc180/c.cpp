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

set<ll> divs(ll n){
	set<ll> v;
	forn(i,1,sqrt(n)+1)
		if(n%i==0){
			if(n/i!=i)
				v.insert(n/i);
			v.insert(i);
		}
	return v;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;

    cin>>n;
    set<ll> x=divs(n);
    for(auto a:x)
    	cout<<a<<'\n';
    
    return 0;
}