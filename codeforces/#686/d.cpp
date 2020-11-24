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

map<ll,int> pf(ll n){
	map<ll,int> m;
	while(n%2==0)
		m[2]++, n/=2;
	for(int i=3;i<=sqrt(n);i+=2)
		while(n%i==0)
			m[i]++, n/=i;
	if(n>2)
		m[n]++;
	return m;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,t;
    cin>>t;

    while(t--){
        cin>>n;
        map<ll,int> a=pf(n);
        ll ans=0, ansi=0;
        for(auto x:a)
        	if(x.second>ansi)
        		ans=x.first, ansi=x.second;

        cout<<ansi<<'\n';
        for(int i=0;i<ansi-1;i++)
        	cout<<ans<<' ', n/=ans;

        cout<<n<<'\n';
    }
    return 0;
}