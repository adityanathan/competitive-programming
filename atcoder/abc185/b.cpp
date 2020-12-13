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
    ll n,curr,m,t;

    cin>>n>>m>>t;
    curr=n;
    vector<ll> a(m+2), b(m+2);
    b[m+1]=a[m+1]=t;
    forn(i,0,m)
    	cin>>a[i+1]>>b[i+1];
    bool bb=true;
    forn(i,1,m+2){
    	curr-=a[i]-b[i-1];
    	if(curr<=0)
    		bb=false;
    	curr=min(n,curr+b[i]-a[i]);
    	if(curr<=0)
    		bb=false;
    }

    cout<<(bb?"Yes":"No")<<'\n';
    
    return 0;
}