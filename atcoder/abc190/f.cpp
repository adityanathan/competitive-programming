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
    int n, ans=0;

    cin>>n;
    vector<int> a(n);
    forn(i,0,n)
    	cin>>a[i], ans+=abs(a[i]-i);
    ans/=2;
    forn(i,0,n){
    	cout<<ans<<'\n';
    	ans+=n-2*a[i]-1;
    }
    
    return 0;
}