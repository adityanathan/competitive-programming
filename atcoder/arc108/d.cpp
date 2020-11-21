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
    int n;
    char c1,c2,c3,c4;

    cin>>n>>c1>>c2>>c3>>c4;
    vector<vector<int>> dp(n+1,vector<int>(4));
    dp[2][1]=1;

    forn(i,3,n+1){
    	if(c1=='a')
    		dp[i][0]+=dp[i-1][0];
    	else
    		dp[i][2]+=dp[i-1][0];
    	if(c2=='a')
    		dp[i][1]+=dp[i-1][1];
    	else
    		dp[i][3]+=dp[i-1][1];
    	if(c3=='a')
    		dp[i][0]+=dp[i-1][2];
    	else
    		dp[i][2]+=dp[i-1][2];
    	if(c4=='a')
    		dp[i][1]+=dp[i-1][3];
    	else
    		dp[i][3]+=dp[i-1][3];
    }

    cout<<dp[n][0]+dp[n][1]+dp[n][2]+dp[n][3]<<'\n';
    
    return 0;
}