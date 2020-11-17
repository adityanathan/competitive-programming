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
    cin>>t;

    while(t--){
        cin>>n>>k;
        vector<int> a(n*k);
        forn(i,0,n*k)
        	cin>>a[i];
        int id=0;
        forn(i,0,(n-1)/2)
        	forn(j,0,k)
        		id++;
        ll ans=0;
        forn(j,0,k){
        	ans+=a[id++];
        	// debug(id-1,a[id-1]);
        	forn(i,1+(n-1)/2,n)
        		id++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}