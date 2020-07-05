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
    ll n,m,k,count,ans=0;

    cin>>n>>m>>k;
    vector<string> a(n);
    forn(i,0,n)
    	cin>>a[i];
    forn(i,0,1<<n)
    	forn(j,0,1<<m){
    		count=0;
    		forn(r,0,n)
    			forn(c,0,m)
    				if(!(i&(1<<r) || j&(1<<c)))
    					count+=a[r][c]=='#';
    		ans+=count==k;
    		if(count==k)
    			debug(i,j);
    	}
    cout<<ans<<'\n';
    
    return 0;
}