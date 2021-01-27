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
    int n,t;
    string s;
    cin>>t;

    while(t--){
        cin>>n>>s;
        vector<vector<int>> dp(n,vector<int>(9));
        if(s[0]=='-')
        	forn(i,0,9)
        		dp[0][i]=1;
        else
        	dp[0][s[0]-'1']=1;
        forn(i,1,n)
        	if(s[i]=='-')
	        	forn(j,0,9)
	        		forn(k,0,j+1)
	        			dp[i][j]+=dp[i-1][k], dp[i][j]%=1000000007;
	        else
	        	forn(k,0,s[i]-'1'+1)
	        		dp[i][s[i]-'1']+=dp[i-1][k], dp[i][s[i]-'1']%=1000000007;
	    ll ans=0;
	    forn(i,0,9)
	    	ans+=dp[n-1][i];
        cout<<ans%1000000007<<'\n';
    }
    return 0;
}