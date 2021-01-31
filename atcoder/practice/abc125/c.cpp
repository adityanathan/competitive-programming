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

int gcd(int a, int b){
	return b?gcd(b,a%b):a;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;

    cin>>n;
    vector<int> a(n), gc(n+1), gc2(n+1);
    forn(i,0,n)
    	cin>>a[i], gc[i+1]=gcd(gc[i],a[i]);
    forn(i,0,n)
    	gc2[n-i-1]=gcd(gc2[n-i],a[n-i-1]);
    int ans=0;
    forn(i,0,n)
    	ans=max(ans, gcd(gc[i],gc2[i+1]));
    cout<<ans<<'\n';
    
    return 0;
}