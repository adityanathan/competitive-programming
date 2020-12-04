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
        vector<int> a(n);
        forn(i,0,n)
        	cin>>a[i];
        int maxjump=max(abs(a[n-1]-a[n-2]),abs(a[1]-a[0]));
        ll ans=0;
        forn(i,1,n){
        	if(i<n-1)
        		maxjump=max(maxjump,abs(a[i]-a[i-1])+abs(a[i+1]-a[i])-abs(a[i+1]-a[i-1]));
        	ans+=abs(a[i]-a[i-1]);
        }
        cout<<ans-maxjump<<'\n';
    }
    return 0;
}