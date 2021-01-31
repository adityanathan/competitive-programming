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
    ll tot=0,n,a,neg=0,mn=2e9;

    cin>>n;
    forn(i,0,n)
    	cin>>a, neg+=a<0, mn=min(mn,abs(a)), tot+=abs(a);
    cout<<tot-(neg%2?2*mn:0)<<'\n';
    
    return 0;
}