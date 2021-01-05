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
    ll n,x,aa,t;
    cin>>t;

    while(t--){
        cin>>n>>x;
        ll lim=1e9, ret=0;
        vector<int> ans,a(n);
        forn(i,0,n){
        	cin>>a[i], aa=a[i];
        	ll cur=0;
        	while(aa%x==0 && cur<lim)
        		cur++, aa/=x;
        	lim=min(lim,cur);
        	ans.push_back(cur);
        }
        forn(i,0,n)
        	if(ans[i]>lim)
        		ret+=(lim+2)*a[i];
        	else
        		ret+=(lim+1)*a[i];

        cout<<ret<<'\n';
    }
    return 0;
}