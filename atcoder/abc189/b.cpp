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
    int n,v,p,x,ans=-1,sum=0;

    cin>>n>>x;

    forn(i,0,n){
    	cin>>v>>p;
    	sum+=v*p;
    	if(sum>x*100&&ans==-1)
    		ans=i+1;
    }
    cout<<ans<<'\n';
    
    return 0;
}