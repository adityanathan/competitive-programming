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
    int n,curr_min,t,count,p=1e8+7.5;
    ll val, ans;
    cin>>t;

    while(t--){
        cin>>n;
        val=n;
        curr_min=n+1;
        ans=count=0;
        while(curr_min>1){
        	if(curr_min>val)
        		curr_min=val, ans+=curr_min;
        	val = (val*n)%p;
        }
        cout<<ans<<'\n';
    }
    return 0;
}