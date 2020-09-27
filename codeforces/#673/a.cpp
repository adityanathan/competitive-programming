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
        vector<int> a(n);
        ll id=0, ans=0;
        forn(i,0,n)
        	cin>>a[i], id=a[id]>a[i]?i:id;
        forn(i,0,n)
        	if(i!=id)
        		ans+=(k-a[i])/a[id];
        cout<<ans<<'\n';
    }
    return 0;
}