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
        vector<int> c(n), a(n), b(n);
        forn(i,0,n)
        	cin>>c[i];
        forn(i,0,n)
        	cin>>a[i];
        forn(i,0,n)
        	cin>>b[i];
        ll ans=0, curr=0;
        forn(i,1,n){
        	curr+=c[i-1]-1-abs(a[i]-b[i]);
        	if(i==1||abs(a[i]-b[i])>curr)
        		curr=abs(a[i]-b[i]);
        	if(a[i]==b[i])
        		curr=0;
        	curr+=2;
        	ans=max(ans,curr+c[i]-1);
        	debug(curr,ans);
        }
        cout<<ans<<'\n';
    }
    return 0;
}