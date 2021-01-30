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
    ll n,k,p,t;
    cin>>t;

    while(t--){
        cin>>n>>k;
        ll curr=0, ans=0;
        forn(i,0,n){
        	cin>>p;
        	if(i&&100*p>k*curr)
        		ans+=p*100/k-curr, curr+=p*100/k-curr;
        	while(i&&100*p>k*curr)
        		curr++, ans++;
        	curr+=p;
        }
        cout<<ans<<'\n';
    }
    return 0;
}