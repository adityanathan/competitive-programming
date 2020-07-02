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

int b,n;
vector<int> k;
vector<vector<int>> dp;

ll ans(ll state, ll bed){
	if(dp[state][bed])
		return dp[state][bed];
	if(state==0)
		return bed==0;
	if(bed==0)
		return 1;
	forn(j,0,k[state]+1)
		if(bed+j==0){
			dp[state][bed]+=1;
			break;
		}
		else
			dp[state][bed]+=ans(state-1,bed-j);
	return dp[state][bed];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	cin>>b>>n;
	k.assign(n+1,0);
	dp.assign(n+1,vector<int>(b+1,0));
	dp[0][0]=1;
    forn(i,0,n)
    	cin>>k[i+1];
    forn(i,1,n+1)
    	forn(j,1,b+1)
    		debug(i,j,ans(i,j));
    return 0;
}