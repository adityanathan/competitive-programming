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
    int n,t,q;
    ll ans;
    cin>>t;

    while(t--){
        cin>>n>>q;
        ans=0;
        vector<int> a(n);
        forn(i,0,n)
        	cin>>a[i];
        bool add=1;
        forn(i,1,n)
        	if(a[i]<a[i-1] && add)
        		ans+=a[i-1], add=0;
        	else if(a[i]>a[i-1] && !add)
        		ans-=a[i-1], add=1;
        if(add)
        	ans+=a[n-1];
        cout<<ans<<'\n';
    }
    return 0;
}