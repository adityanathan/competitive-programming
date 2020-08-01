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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,ans=0;

    cin>>n;
    set<int> a;
    forn(dig,1,10)
	    forn(i,0,1<<dig){
	    	ll c=0;
	    	forn(j,0,dig)
	    		if(i&1<<dig-1-j)
	    			c*=10, c+=7;
	    		else
	    			c*=10, c+=4;
	    	debug(c);
	    	if(c>n)
	    		break;
	    	a.insert(c);
	    }
    forit(it,a)
    	for(auto jt = it; jt!=a.end(); jt++)
    		ans+=gcd(*it,*jt)==1;

    cout<<ans<<'\n';

    return 0;
}