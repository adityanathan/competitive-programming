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
    int n,k,t;
    cin>>t;

    while(t--){
        cin>>n>>k;
        vector<ll> a(n);
        forn(i,0,n)
        	cin>>a[i];
        sort(a.begin(),a.end());
        forn(i,0,k)
        	a[n-1]+=a[n-2-i];

        cout<<a[n-1]<<'\n';
    }
    return 0;
}