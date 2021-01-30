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
    int n,m,k,ans=0;

    cin>>n>>m;
    vector<int> a(m), b(m), A(n);
    forn(i,0,m)
    	cin>>a[i]>>b[i];
    cin>>k;
    vector<int> c(k), d(k);
    forn(i,0,k)
    	cin>>c[i]>>d[i];
    forn(i,0,1<<k){
    	A.assign(n,0);
    	forn(j,0,k)
    		if(i&1<<j)
    			A[c[j]-1]++;
    		else
    			A[d[j]-1]++;
    	int curr=0;
    	forn(j,0,m)
    		curr+=A[a[j]-1]&&A[b[j]-1];
    	ans=max(ans,curr);
    }

    cout<<ans<<'\n';
    
    return 0;
}