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
    int n,t,k;
    ll ans;
    cin>>t;

    while(t--){
        cin>>n>>k;
        vector<int> a(n),w(k);
        ans=0;
        forn(i,0,n)
        	cin>>a[i];
        forn(i,0,k)
        	cin>>w[i];
        sort(a.begin(),a.end());
        sort(w.rbegin(),w.rend());
        int i=0;
        for(auto wi:w){
        	if(wi>1)
        		ans+=a[i];
        	forn(j,0,wi-1)
        		i++;
        }
        forn(i,n-k,n){
        	ans+=a[i];
        	if(w[i-n+k]<=1)
        		ans+=a[i];
        }
        cout<<ans<<'\n';
    }
    return 0;
}