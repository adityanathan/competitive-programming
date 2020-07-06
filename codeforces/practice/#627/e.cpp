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

int n,h,l,r;
vector<int> a(2000);
vector<vector<int>> dp(2000,vector<int>(2000,-1));

int f(int i, int hour){
    if(n==i)
        return l<=hour && hour<=r;
    if(dp[i][hour]==-1)
        dp[i][hour]=(l<=hour&&hour<=r)+max(f(i+1,(2*h+hour+a[i]-1)%h),f(i+1,(2*h+hour+a[i])%h));
    return dp[i][hour];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>h>>l>>r;
    forn(i,0,n)
    	cin>>a[i];
    cout<<f(0,0);
    return 0;
}