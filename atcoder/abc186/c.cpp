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
    int n,ans=0;

    cin>>n;
    forn(i,1,n+1){
    	bool b=false;
    	int j=8*i;
    	while(j/=8)
    		if(j%8==7)
    			b=true;
    	j=10*i;
    	while(j/=10)
    		if(j%10==7)
    			b=true;
    	ans+=!b;
    }
    cout<<ans<<'\n';
    
    return 0;
}