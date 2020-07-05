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
    ll n,ans=0;

    cin>>n;
    vector<int> a(n);
    forn(i,0,n)
    	cin>>a[i];
    sort(a.rbegin(),a.rend());
    forn(i,0,n-1){
    	ans+=a[(i+1)/2];
    }
    cout<<ans<<'\n';
    
    return 0;
}