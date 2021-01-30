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
        vector<int> dp(n+1), put;
        if(s[0]=='L')
        	dp[0]=1;
        if(s[n-1]=='R')
        	dp[n]=1;
        forn(i,0,n-1)
        	if(s[i]=='R'&&s[i+1]=='L')
        		dp[i+1]=1, put.push_back(i+1);
        for(auto x:put){
        	int i=x-1;
        	while(i>=0 && s[i]=='R')
        		dp[i]=2, i--;
        	i=x+1;
        	while(i<=n && s[i-1]=='L')
        		dp[i]=2, i++;
        }
        forn(i,0,n-1)
        	if(s[i]=='L'&&s[i+1]=='R')
        		dp[i+1]=1+(dp[i]+dp[i+2]);
        forn(i,0,n-1)
        	if(s[i]=='R'&&s[i+1]=='L')
        		dp[i]+=dp[i+2]-1, dp[i+2]=dp[i];
        for(auto x:dp)
        	cout<<x<<' ';
        cout<<'\n';
    }
    return 0;
}