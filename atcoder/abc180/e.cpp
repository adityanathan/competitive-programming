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

int n;

vector<ll> x(17), y(17), z(17);

ll dist(int i, int j){
	return abs(x[i]-x[j])+abs(y[i]-y[j])+max(0ll,z[j]-z[i]);
}

ll done, dp[1<<17][20];

ll  tsp(ll mask, ll pos){
	
	if(mask==done)
		return dist(pos,0);
	
	if(dp[mask][pos]!=-1)
	   return dp[mask][pos];
	
	ll ans = 1e18;

	forn(city,0,n)
		if((mask&(1<<city))==0)
			ans = min(ans, dist(pos,city)+tsp(mask|(1<<city), city));
	return dp[mask][pos] = ans;
} 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n;
    done = (1<<n)-1;

    forn(i,0,n)
    	cin>>x[i]>>y[i]>>z[i];

    forn(i,0,1<<n)
        forn(j,0,n)
            dp[i][j] = -1;
        
    cout<<tsp(1,0)<<'\n';
    
    return 0;
}