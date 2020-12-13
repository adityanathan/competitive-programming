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

    cin>>n>>m;
    vector<int> a(n), b(m);
    vector<vector<int>> dp(n+1,vector<int>(m+1));

    forn(i,0,n)
    	cin>>a[i],dp[i+1][0]=i+1;
    forn(i,0,m)
    	cin>>b[i],dp[0][i+1]=i+1;

    forn(i,1,n+1)
    	forn(j,1,m+1){
    		dp[i][j]=min((a[i-1]!=b[j-1])+dp[i-1][j-1],1+min(dp[i][j-1],dp[i-1][j]));
    	}

    cout<<dp[n][m]<<'\n';
    
    return 0;
}