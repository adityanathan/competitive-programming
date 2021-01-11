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
    int n;

    cin>>n;
    ll ans=0;
    vector<int> a(n), b(n);
    forn(i,0,n)
    	cin>>a[i];
    forn(i,0,n)
    	cin>>b[i], ans+=a[i]*b[i];
    cout<<(ans?"No":"Yes")<<'\n';
    
    return 0;
}