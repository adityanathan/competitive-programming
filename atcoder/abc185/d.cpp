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

ll gcd(ll a, ll b){
	return b?gcd(b,a%b):a;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;

    cin>>n>>m;
    vector<ll> a(m+2,0);
    a[m+1]=n+1;
    forn(i,0,m)
    	cin>>a[i+1];
    sort(a.begin(),a.end());
    ll ans=1e11,fin=0;
    forn(i,1,m+2){
    	if(a[i]==a[i-1]+1)
    		continue;
    	ans=min(ans,a[i]-a[i-1]-1), debug(ans);
}
    forn(i,1,m+2)
    	fin+=(a[i]-a[i-1]-1+ans-1)/ans;
    cout<<fin;
    
    return 0;
}