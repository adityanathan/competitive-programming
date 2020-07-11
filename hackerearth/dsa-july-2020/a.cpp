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

ll p = 1e9+7.5;

ll pow(ll a, ll n, ll p){
	if(n==0)
		return 1;
	ll x = pow(a,n/2,p);
	if(n%2)
		return a*x%p*x%p;
	return x*x%p;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll n,aa,ans=0;

	cin>>n;
	unordered_map<ll,ll> m;

	forn(i,0,n)
		cin>>aa,m[aa]++;

	forit(it,m)
		if(it->second>2)
			ans+=3*p+pow(2,it->second,p)-1-(it->second*(it->second+1)/2)%p, ans%=p;
	cout<<ans;
	return 0;
}