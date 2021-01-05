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
    int n,x,t;
    cin>>t;

    while(t--){
        cin>>n>>x;
        vector<int> a(n);
        ll sum=0,ans=0;
        forn(i,0,n)
        	cin>>a[i], ans+=1+(a[i]-1)/x, sum+=a[i];

        cout<<1+(sum-1)/x<<' '<<ans<<'\n';
    }
    return 0;
}