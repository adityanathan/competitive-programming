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
    int n,m;
    string x,y;

    cin>>n>>m;
    int dp[n+1][m+1];
    cin>>x>>y;
    forn(i,0,n+1)  
    	forn(j,0,m+1)
        	if(i == 0 || j == 0)  
	            dp[i][j] = 0;  
	        else if (x[i-1] == y[j-1])  
	            dp[i][j] = dp[i-1][j-1]+2;  
	        else
	            dp[i][j] = max(0,max(dp[i-1][j],dp[i][j-1])-1);

	int ans=0;
	forn(i,0,n+1)
		forn(j,0,m+1)
			ans=max(ans,dp[i][j]);
    cout<<ans<<'\n';
    
    return 0;
}