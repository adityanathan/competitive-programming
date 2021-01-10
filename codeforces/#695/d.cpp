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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,q,x;

    cin>>n>>k>>q;
    vector<ll> a(n), cnt(n);
    ll ans=0;
    forn(i,0,n)
    	cin>>a[i];
    forn(i,0,n){
    	int x=i, inc=1;
    	if(i<n-1)
	    	forn(j,0,k){
	    		if(x==n-1&&inc==1)
	    			inc=-1;
	    		else if(x==0&&inc==-1)
	    			inc=1;
	    		cnt[x]++;
	    		x+=inc;
	    	}
    	x=i, inc=-1;
    	if(i)
	    	forn(j,0,k){
	    		if(x==n-1&&inc==1)
	    			inc=-1;
	    		else if(x==0&&inc==-1)
	    			inc=1;
	    		cnt[x]++;
	    		x+=inc;
	    	}
    }
	forn(i,0,n)
		ans+=a[i]*cnt[i]%(int)1e9+7;
	int i;
	while(q--)
		cin>>i>>x, i--, ans+=(x-a[i])*cnt[i], ans%=(int)1e9+7, a[i]=x, cout<<ans<<'\n';
	
    
    cout<<n<<'\n';
    
    return 0;
}