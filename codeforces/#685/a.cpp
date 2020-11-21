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

ll divs(ll n){
	forn(i,2,sqrt(n)+1)
		if(n%i==0)
			return min(i,n/i);
	return n;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,t;
    cin>>t;

    while(t--){
        cin>>n;
        if(n<=3){
        	cout<<n-1<<"\n";
        	continue;
        }
        cout<<2+(n%2)<<'\n';
    }
    return 0;
}