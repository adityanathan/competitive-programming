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

ll divs(ll n, ll num){
	vector<ll> v;
	forn(i,1,sqrt(n)+1)
		if(n%i==0){
			if(n/i!=i)
				v.push_back(n/i);
			v.push_back(i);
		}
	sort(v.begin(),v.end());
	ll ans=1;
	for(auto x:v)
		if(x<=num)
			ans=x;
	return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,t;
    cin>>t;

    while(t--){
        cin>>n>>m;
        ll ans=0,a;
        forn(i,0,m)
        	cin>>a, ans=gcd(ans,a);


        cout<<n-divs(ans,n)<<'\n';
    }
    return 0;
}