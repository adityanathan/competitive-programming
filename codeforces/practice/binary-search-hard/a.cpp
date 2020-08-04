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
    ll cnt1, cnt2, x, y, l=2, r=1e18, mid;
    cin>>cnt1>>cnt2>>x>>y;
    while(l<r){
    	mid=(l+r)/2;
    	debug(l,r,mid);
    	if(mid-mid/x<cnt1 || mid-mid/y<cnt2 || (mid-mid/x)-(mid-mid/x)/y < cnt1+cnt2)
    		l=mid+1;
    	else
    		r=mid-1;
    }
    cout<<mid;
    return 0;
}