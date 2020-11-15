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
    int n,t,m;
    cin>>t;

    while(t--){
        cin>>n>>m;
        ll mini=1e9, sum=0, count=0,a;
        forn(i,0,n)
        	forn(i,0,m)
        		cin>>a, sum+=abs(a), count+=a<0, mini=min(mini,abs(a));
        cout<<(count%2?sum-2*mini:sum)<<'\n';
    }
    return 0;
}