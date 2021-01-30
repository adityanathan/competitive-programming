#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i <= n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, ans=0;
    cin>>n;
    forn(i,1,sqrt(n))
    	if(n%i==0){
    		if(i%2+n/i%2==2)
    			ans+=4-2*(i==n/i);
    		else if(i%2+n/i%2)
    			ans+=2-(i==n/i);
    	}
    cout<<ans<<'\n';
    
    return 0;
}