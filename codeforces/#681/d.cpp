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
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(n),lm(n,1e7),rm(n,1e7),leastl(n,-1e7),leastr(n,-1e7);
        forn(i,0,n)
        	cin>>a[i];
        forn(i,1,n)
        	lm[i]=min(lm[i-1],a[i-1]),
        	rm[n-1-i]=min(rm[n-i],a[n-i]),
        	leastr[i]=max(leastr[i-1],a[i-1]-lm[i-1]),
        	leastl[n-1-i]=max(leastl[n-i],a[n-i]-rm[n-i]);
        	
        bool b=true;
        debug(leastl,leastr);
        forn(i,1,n-1)
        	b=b&(leastl[i]+leastr[i]+a[i]<=lm[i]+rm[i])&(a[i]>=leastl[i]+leastr[i]);
        cout<<(b?"YES":"NO")<<'\n';
    }
    return 0;
}